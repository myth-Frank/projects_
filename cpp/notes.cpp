/*
# 基础语法
    # 关键词
        # 数据类型
            #   bool
            # 布尔类型
            #   true
            # 布尔真
            #   false
            # 布尔假
            #   char
            # 字符类型
            #   wchat_t
            # 宽字符类型
            #   int
            # 整型类型
            #   float
            # 单精度浮点数类型
            #   double
            # 双精度浮点数类型
            #   short
            # 范围｜精度小过原本类型的(修饰) 可修饰int
            #   long
            # 范围｜精度大过原本类型的(修饰) 可修饰int和double
            #   signed
            # 有符号的(修饰) 可修饰char和int
            #   unsigned
            # 无符号的(修饰) 可修饰char和int
            #   explicit
                #   explicit type func(param){}
            # 避免隐式类型转换
            #   auto
                #   auto num = value;
            # 根据初始值自动推断变量的类型
        # 语句
            # switch_case
                # switch
                # case
                # default
                    #   switch(expr){
                    #     case constant_expr_1:
                    #         break;
                    #     case constant_expr_2:
                    #         break;
                    #     default:
                    #         break;
                    #   }
                # expr必须为int, char, 或enum类型
            # loops 
                # do
                    #   do{}while(condition);
                # for
                    #   for ( int i = 0; i < max; i ++ ){}
                # while
                    #   while(condition){}
            # if_else
                # if
                # else
                    #   if(condition){}
                    #   else if(condition2){}
                    #   else{}
            # break
                # break用于跳出for、while循环或switch语句(当前一层的语句体)
            # continue
                # continue用于调到一个循环的起始位置
            # goto
                #   {
                #       label: //这块是冒号哈
                #       goto label; 
                #   }
                # goto用于无条件跳转到函数内得标号处 一般情况不建议使用goto，风险较大 最大的作用就是跳出多重循环了
        #定义&初始化
            # const
                #   const type variable = value;
                # 限定variable值不变
                #   const type* variable = value;
                # 限定*variable值不变
                #   type* const variable = value;
                # 限定variable值不变
            # volatile
                #   volatile type variable = value;
                # 当读取一个变量时，为提高存取速度，编译器优化时有时会先把变量读取到一个寄存器中，以后再取变量值时 就直接从寄存器中取值
                # 优化器在用到volatile变量时必须每次都小心地重新读取这个变量的值，而不是使用保存到寄存器里的备份 volatile适用于多线程应用中被几个任务共享的变量
            # enum
                #   enum type_name { value1, value2, value3, value4, ...}
    # 变量 
        # 数据类型 
            # bool 布尔值(bool)
            #   存储值 true 或 false
            # char 字符(character)
            #   储存一个字符
            # int 整数(integer)
            #   储存一个整数
            # float 单精度浮点值(float)
            #   小数,储存位数较小(6位左右)
            # double 双精度浮点值(double)
            #   小数,储存位数较大(12位左右)
            # void 虚无(void)
            #   表示类型的缺失
            # wchar_t 宽字符类型(widecharacter)
            #   通常储存utf值(例如中文日文韩文)
        # 修饰符
            # signed
                # 表示有符号数
                # 可以修饰int或char
            # unsigned
                # 表示无符号数(非负)
                # 可以修饰int或char
            # long
                # 表示的范围较大
                # 可以修饰int或double
            # short
                # 表示的范围较小
                # 可以修饰int
            # long long
                # 表示的范围比long int大
                # 可以修饰int, 后面省略了int
            # 修饰符  signed 和  unsigned 也可以作为  long 或  short 修饰符的前缀
        # 定义声明变量 
            # 格式   type variable = value;
            # 可以不赋初始值(value), 一次性可以定义多个同类型变量,用逗号分隔
            # 不得用数字开头,只能包含数字,字母和下划线, 一般不用下划线开头(系统专用)
            # 全局变量 定义在所有的函数外部定义的变量 它的作用域是整个程序，也就是所有的源文件
            # 局部变量 定义在函数体内部的变量 作用域仅限于函数体内部 离开函数体就会无效 再调用就是出错
        # 数组 
            # 数组用于将多个值存储在单个变量中，而不是为每个值声明单独的变量
            # 要声明数组，要使用方括号定义变量类型
            # 要向数组中插入值，我们可以使用数组字面量，就是将值放在以逗号分隔的花括号内
            # 若要将数字类型的数组初始化为全部是0可以使用花括号内写0的形式
            # 要创建字符数组，数组字面量可以用字符串的形式
        # 多维数组 
            # 多维数组是包含一个或多个数组的数组
            # 有n层数组嵌套的数组是n维数组
            # 定义方式 
            #   type list[n1][n2][n3]..... = { // layer1
            #     { {... // layer3 }, {...}, {...} // layer2 },
            #     { {...}, {...}, {...} },
            #     { {...}, {...}, {...} },
            #   }
            # n1代表layer1中有多少个数组,n2代表每个layer2中有多少个值
            # n3代表每个layer3中有多少个值......以此类推
            # 调用 
            #   list[index1][index2][index3].....
            # index1代表layer1中所需值的下标,index2代表所选layer2中所需值的下标
            # index3代表所选layer3中所需值的下标......以此类推
        # 下标(索引)
            # 用中括号括起的数字正着数从零开始
            # 可以通过索引调出或修改数组或字符串的某个值
        # 数组长度
            #   sizeof(list) // 返回int类型数据
            # 要找出一个数组有多少个元素，可以通过sizeof()计算
        # C风格字符串
            # C 风格字符串是使用\0终止的一维字符数组 '\0'就是 ASCII 码为 0 的字符，对应的字符是（Null），表示"字符串结束符"，是字符串结束的标志
            # 由于在数组的末尾存储了空字符，所以字符数组的大小比字符数多一个
            #   char name[len + 1] = {'char1', 'char2', ......, '\0'}
            # 方法
                # strcpy
                    # strcpy(s1, s2)
                    # 复制字符串 s2 到字符串 s1
                # ctrcat
                    # strcat(s1, s2)
                    # 连接字符串 s2 到字符串 s1 的末尾
                # strlen
                    # strlen(s1)：返回字符串 s1 的长度
                # strcmp
                    # strcmp(s1, s2)
                    # 如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回小于 0；如果 s1>s2 则返回大于 0
                # strchr
                    # strchr(s1, ch)
                    # 返回一个指针，指向字符串 s1 中字符 ch 的第一次出现的位置
                # strstr
                    # strstr(s1, s2)
                    # 返回一个指针，指向字符串 s1 中字符串 s2 的第一次出现的位置
                # 
    # 预处理
        # include
            #   #include <......>
            # 引用系统或第三方库提供的头文件
            #   #include "......"
            # 引用项目中自制的头文件
        # 宏定义
            #   #define DEF (EXPR)
            # 宏定义DEF对应EXPR
            #   #undef DEF
            # 取消DEF作为名字的宏定义
            #   #ifdef DEF
            #   #else
            #   #endif
            # 类似ifelse，如果用宏定义了DEF则执行#ifdef里面的代码，没有则执行#else中的，最后必须有#endif
            #   #ifndef DEF
            # 类似#ifdef只不过是未定义DEF
            #   #if
            #   #elif
            #   #else
            #   #endif
            # if...else...
        # const前缀声明 
            # 格式   const type variable = value;
            # 具有类型和作用域的常量,占内存
    # 运算符
        # 加减乘除模
            # a + b  a与b的和
            # a - b  a与b的差
            # a * b  a与b的积
            # a / b  a除以b,若a b有一个为浮点数则自然除否则向下取整
            # a % b  a取模于b
        # 赋值运算符
            # a = b  将b赋值给a
            # a += b  a与b的和并赋值给a
            # a -= b  a与b的差并赋值给a
            # a *= b  a与b的积并赋值给a
            # a /= b  a除以b并赋值给a
            # a %= b  a取模于b并赋值给a
        # 自增自减运算符
            #  i++  参加运算后i自增1
            #  i--  参加运算后i自减1
            #  ++i  i自增1后参加运算
            #  --i  i自减1后参加运算
        # 三元运算符
            # 格式   condition ? value_if_true   value_if_false;
            # 判断condition的真假,若为真返回value_if_true,否则返回value_if_false
        # 逻辑运算符
            #  "&&"  与, 若前后两条件均为真则返回真否则返回假
            #  "||"  或, 前后两条件有一个为真则返回真否则返回假
            #  "!"   否, 用来逆转操作数的逻辑状态
        # 表达式 
            # 小于：a < b
            # 小于或等于：a <= b
            # 大于：a > b
            # 大于或等于：a >= b
            # 等于：a == b
            # 不等于：a != b
        # 位运算符
            #  &     按位与操作，按二进制位进行"与"运算
            #  |     按位或操作，按二进制位进行"或"运算
            #  ^     异或运算，按二进制位进行"异或"运算 (1 ^ 1 = 0)
            #  ~     取反运算符，按二进制位进行"取反"运算(~1 = -2, ~0 = -1)
            #  <<    二进制左移运算符 将一个运算对象的各二进制位全部左移若干位（左边的二进制位丢弃，右边补0）
            #  >>    二进制右移运算符 将一个数的各二进制位全部右移若干位，正数左补0，负数左补1，右边丢弃
        # sizeof  
            #   sizeof(var)  
            # sizeof 运算符返回变量的大小
        # 强制类型转换
            #    static_cast<type> (expr)
            # 静态类型转换，将expression转换为type,主要用于内置数据类型(int double float char...)之间的相互转换
            # 用于自定义类时，静态转换会判断转换类型之间的关系，如果转换类型之间没有任何关系，则编译器会报错，不可转换

            #   const_cast<type> (expr)
            # 用于修改类型的 const / volatile 属性 除了 const 或 volatile 属性之外，目标类型必须与源类型相同
            # 这种类型的转换主要是用来操作所传对象的 const 属性，可以加上 const 属性，也可以去掉 const 属性

            #   dnamic_cast<type> (expr)
            # 用于将父类指针或引用转换为子类指针或引用(从基类指向派生类的指针/引用) 类必须包含虚函数
            # 在运行时执行转换，验证转换的有效性 如果转换未执行，则转换失败，表达式 expr 被判定为 null
            # 执行动态转换时，type 必须是类的指针 类的引用或者 void*
            # 如果 type 是类指针类型，那么 expr 也必须是一个指针，如果 type 是一个引用，那么 expr 也必须是一个引用

            #   reinterpret_cast<type> (expr)
            # 用于指针引用或其它类型间的转换 可将一个指针或引用类型转换为另一个不相关的指针或引用类型 可能也包括指针与足够大的整数类型之间的转换
            # 只是将原类型的位模式转换为目标类型的位模式 没有任何类型检查
        # 逗号运算符
            #   (expr1, expr2, expr3)
            # 使用逗号运算符是为了把几个表达式放在一起 整个逗号表达式的值为系列中最后一个表达式的值 从本质上讲，逗号的作用是将一系列运算按顺序执行
        # 成员运算符
            # .（点）运算符和 ->（箭头）运算符用于引用类 结构和共用体的成员
        # 指针运算符
            # 指针运算符 & 返回变量的地址
            # 指针运算符 * 指向一个变量
# 高阶语法
    # 函数 
        # 定义函数 
            #   type func(prams1, prams2, prams3 = value...){}
            # prams1,prams2,prams3都是形参, 在使用函数时传入值,也能在定义函数时设置参数初始值若未传入则使用初始值如prams3
        # 声明函数 
            #   type func(prams1, prams2, prams3...)
            # 可以让函数的定义部分放在整个代码的最后
        # 调用函数 
            #   func(value1, value2, value3...)
            # 输入实参列表返回函数定义的返回值
        # 函数递归
            #   func(prams1, prams2, prams3){
            #     func(value1, value2, value3){}
            #   }
            # 一个函数在它的函数体内，直接或者间接地调用了他本身
    # 指针
        # 指针是一个变量，其值为另一个变量的地址，即，内存位置的直接地址
        # 指针的声明
            #   type *var-name;
            # 在这里，type 是指针的基类型，它必须是一个有效的 C++ 数据类型，var-name 是指针变量的名称
            # 用来声明指针的星号 * 与乘法中使用的星号是相同的 但是，在这个语句中，星号是用来指定一个变量是指针
            # 所有指针的值的实际数据类型，不管是整型 浮点型 字符型，还是其他的数据类型，都是一样的，都是一个代表内存地址的长的十六进制数
            # 不同数据类型的指针之间唯一的不同是，指针所指向的变量或常量的数据类型不同
        # 指针的使用
            # 使用指针时会频繁进行以下几个操作：定义一个指针变量 把变量地址赋值给指针 访问指针变量中可用地址的值
            # 这些是通过使用一元运算符 * 来返回位于操作数所指定地址的变量的值
            #   int  *ip;          指针的声明
            #   ip = &var;         指针的赋值
            #   type var = ip;     访问指针储存的地址
            #   type var = *ip;    访问指针地址的值
        # null指针
            # 在变量声明的时候，如果没有确切的地址可以赋值，为指针变量赋一个 NULL 值是一个良好的编程习惯 赋为 NULL 值的指针被称为空指针 
            # NULL 指针是一个定义在标准库中的值为零的常量
        # 指针运算
            # 加法运算
            # 当一个指针p加上一个整数n时，结果是指针p向前移动n个元素的大小 例如，如果p是一个int类型的指针，每个int占4个字节，那么p + 1将指向p所指向的下一个int元素
            # 减法运算
            # 当一个指针p减去一个整数n时，结果是指针p向后移动n个元素的大小 例如，如果p是一个int类型的指针，每个int占4个字节，那么p - 1将指向p所指向的前一个int元素
            # 自增运算
            # 当一个指针p自增时，结果是指针p向前移动n个元素的大小 例如，如果p是一个int类型的指针，每个int占4个字节，那么p ++ 将指向p所指向的下一个int元素
            # 自减运算
            # 当一个指针p自减时，结果是指针p向后移动1个元素的大小 例如，如果p是一个int类型的指针，每个int占4个字节，那么p -- 将指向p所指向的前一个int元素
            # 指针与指针之间的减法运算
            # 可以计算两个指针之间的距离 当从一个指针p减去另一个指针q时，结果是两个指针之间的元素个数 例如，如果p和q是两个int类型的指针，每个int占4个字节，那么p - q将得到两个指针之间的元素个数
            # 指针与整数之间的比较运算
            # 可以将指针与整数进行比较运算 可以使用关系运算符（如< > <= >=）对指针和整数进行比较 这种比较通常用于判断指针是否指向某个有效的内存位置
        # 指针数组
            #   type *pointer[len];
        # 指向指针的指针
            #   type *ptr1 = &var;
            #   type **ptr2 = &ptr1;
            #   type ***ptr3 = &ptr2;
            # ptr2指向ptr1 ptr3指向ptr2 对应的星号数量也要改变
        # 指针传递给函数
            #   type func( int *var ){}
            # 在函数内可以修改或更新var的值而不需要传入var
            #   type func( int *arr, len ){}
            # 用int类型传入列表arr就用指针
        # 同理函数可以返回指针
    # 枚举
        #   enum var{ value1, value2, value3, ....}
        # var的值只能取value1, value2, value3.... 这些值 value1默认对应 0 后面的依次增加1
        #   enum var{ value1 = 1, value2, value3, ....}
        # value1对应 1 后面的依次增加1
        #   enum var: type{ value1, value2, value3, ....}
        # 制定var变量的底层类型决定内存大小 不过不建议
        # int enum强制转换
            #   enum type t = type(var: int);
            #   enum type t = (enum type)var: int;
    # 引用
        # 不存在空引用 引用必须连接到一块合法的内存
        # 一旦引用被初始化为一个对象，就不能被指向到另一个对象
        # 引用必须在创建时被初始化
        #   int &ref = var;
        # 定义了一个初始化为var的引用ref
        # 将引用作为参数
            #   type func(int &x, int &y){}
            # 在函数内进行对引用的操作从而操作传入的参数的值
        # 函数返回引用
            #   type &func(int x){}
            # 可以将函数放在表达式左侧从而修改被引用的变量的值
            # 当返回一个引用时，要注意被引用的对象不能超出作用域 所以返回一个对局部变量的引用是不合法的，但是，可以返回一个对静态变量的引用
    # 结构
        # 定义结构
            #   struct type_name {
            #      member_type1 member_name1;
            #      member_type2 member_name2;
            #      member_type3 member_name3;
            #      .
            #      .
            #   } object_names;
            # type_name 是结构体类型的名称，member_type1 member_name1 是标准的变量定义，比如 int i; 或者 float f; 或者其他有效的变量定义
            # 在结构定义的末尾，最后一个分号之前，您可以指定一个或多个结构变量，这是可选的
        # 定义结构类型的变量
            #   struct type_name variable
        # 访问结构成员
            #   var.member1;
            # 访问结构的成员，要使用成员访问运算符（.） 成员访问运算符是结构变量名称和我们要访问的结构成员之间的一个'.'
        # 结构作为函数参数
            #   type func( struct type_name var ){}
            # 您可以把结构作为函数参数，传参方式与其他类型的变量或指针类似
        # 指向结构的指针
            #   struct struct_name *struct_pointer;
            # 可以定义指向结构的指针，方式与定义指向其他类型变量的指针相似
            #   struct_pointer -> member1;
            # 要使用指向该结构的指针访问结构的成员，必须使用 -> 运算符
        # typedef
            #   typedef struct type_name {
            #      ........
            #   } type_name
            # 可以不用struct关键字来定义type_name类型的变量
    # 类
        # 定义类
            #   class classname{
            #      access specificers:
            #          variables;
            #          functions( type var ){}
            #   };
        # 类对象的声明
            #   classname object
        # 类函数
            # 类成员函数
                # 类的成员函数是指那些把定义和原型写在类定义内部的函数，就像类定义中的其他变量一样 类成员函数是类的一个成员，它可以操作类的任意对象，可以访问对象中的所有成员
                # 成员函数可以定义在类定义内部，或者单独使用范围解析运算符 :: 来定义(type classname::func(){})
                # 类成员函数小括号后面加const代表这个函数不能修改对象的值 类似"只读"函数
            # 类访问修饰符
                # 数据封装是面向对象编程的一个重要特点，它防止函数直接访问类类型的内部成员
                # 类成员的访问限制是通过在类主体内部对各个区域标记 public private protected 来指定的 关键字 public private protected 称为访问修饰符
                # 公有成员
                    # public
                    # 公有成员在程序中类的外部是可访问的 您可以不使用任何成员函数来设置和获取公有变量的值
                    #   object.value;
                    #   object.method();
                # 私有成员
                    # private
                    # 私有成员变量或函数在类的外部是不可访问的，甚至是不可查看的 只有类和友元函数可以访问私有成员
                    #   object.private;    // error
                    #   object.func();
                # 受保护成员
                    # protected
                    # protected（受保护）成员变量或函数与私有成员十分相似，但有一点不同，protected（受保护）成员在派生类（即子类）中是可访问的
                    #   object.protected();
                    #   derived_object.protected();
                # 继承
                    #   public
                    # 基类 public 成员，protected 成员，private 成员的访问属性在派生类中分别变成：public, protected, private
                    #   protected 
                    # 基类 public 成员，protected 成员，private 成员的访问属性在派生类中分别变成：protected, protected, private
                    #   private 
                    # 基类 public 成员，protected 成员，private 成员的访问属性在派生类中分别变成：private, private, private
            # 构造函数
                #   classname::classname(){}
                # 类的构造函数是类的一种特殊的成员函数，它会在每次创建类的新对象时执行
                # 构造函数的名称与类的名称是完全相同的，并且不会返回任何类型，也不会返回 void 构造函数可用于为某些成员变量设置初始值
                #   classname::classname(): property1(value1), property2(value2), .....{}
                # 初始化列表将value复制给对应property
            # 折构函数
                #   classname::~classname(){}
                # 类的析构函数是类的一种特殊的成员函数，它会在每次删除所创建的对象时执行
                # 析构函数的名称与类的名称是完全相同的，只是在前面加了个波浪号（~）作为前缀，它不会返回任何值，也不能带有任何参数
                # 析构函数有助于在跳出程序（比如关闭文件 释放内存等）前释放资源
            # 拷贝构造函数
                #   classname::classname( const classname &obj ){}
                # 在这里，obj 是一个对象引用，该对象是用于初始化另一个对象的
                #   class obj2(obj1);
                #   class obj2 = obj1;
                # 调用了拷贝构造函数来构造obj2
                # 拷贝构造函数是一种特殊的构造函数，它在创建对象时，是使用同一类中之前创建的对象来初始化新创建的对象
                # 拷贝构造函数通常用于通过使用另一个同类型的对象来初始化新创建的对象 复制对象把它作为参数传递给函数或复制对象，并从函数返回这个对象
                # 如果在类中没有定义拷贝构造函数，编译器会自行定义一个
                # 如果类带有指针变量，并有动态内存分配，则它必须有一个拷贝构造函数
                # 若要禁用一个类的拷贝构造函数 则在后面加上 " = delete" 即 classname::classname( const classname &obj ) = delete
            # 友元函数
                #   friend type friend_func( classname obj ){}
                # 在本类的定义中声明friend_func是本类的友元函数
                #   friend class friend_class;
                # 在本类的定义中声明friend_class是本类的友元类
                # 类的友元函数是定义在类外部，但有权访问类的所有私有（private）成员和保护（protected）成员 尽管友元函数的原型有在类的定义中出现过，但是友元函数并不是成员函数
                # 友元可以是一个函数，该函数被称为友元函数；友元也可以是一个类，该类被称为友元类，在这种情况下，整个类及其所有成员都是友元
                # 一般套上引用这样就不会额外调用折构函数
            # 内联函数
                # 隐式内联
                    # 类内定义的成员函数
                # 类外定义成员函数
                    # 类内声明类外定义的成员函数
                # 追加内联
                    #   inline type func(prams1, prams2, ...){}
                # 不同于其他函数在调用时将执行权转到该函数 内联函数将调用自身的表达式替换为自身函数体(有点类似于宏是吧)
            # this指针
                #   type func( type arg ){
                #      this -> member ...... ;
                #      this -> method() ...... ; 
                #   }
                # 在 C++ 中，this 指针是一个特殊的指针，它指向当前对象的实例
                # 在 C++ 中，每一个对象都能通过 this 指针来访问自己的地址
                # this是一个隐藏的指针，可以在类的成员函数中使用，它可以用来指向调用对象
                # 当一个对象的成员函数被调用时，编译器会隐式地传递该对象的地址作为 this 指针
                # 友元函数没有 this 指针，因为友元不是类的成员，只有成员函数才有 this 指针
            # 指向类的指针
                #   classname *ptr;
                # 一个指向 C++ 类的指针与指向结构的指针类似，访问指向类的指针的成员，需要使用成员访问运算符 ->，就像访问指向结构的指针一样
                # 与所有的指针一样，您必须在使用指针之前，对指针进行初始化
                # 在 C++ 中，指向类的指针指向一个类的对象，与普通的指针相似，指向类的指针可以用于访问对象的成员变量和成员函数
            # 静态成员
                #   class classname{
                #       public:
                #           static type var;
                #           static type func(){} 
                #   }
                # 我们可以使用 static 关键字来把类成员定义为静态的 当我们声明类的成员为静态时，这意味着无论创建多少个类的对象，静态成员都只有一个副本
                # 静态成员在类的所有对象中是共享的 如果不存在其他的初始化语句，在创建第一个对象时，所有的静态数据都会被初始化为零
                # 我们不能把静态成员的初始化放置在类的定义中，但是可以在类的外部通过使用范围解析运算符 :: 来重新声明静态变量从而对它进行初始化
                # 如果把函数成员声明为静态的，就可以把函数与类的任何特定对象独立开来 静态成员函数即使在类对象不存在的情况下也能被调用，静态函数只要使用类名加范围解析运算符 :: 就可以访问
                # 静态成员函数只能访问静态成员数据 其他静态成员函数和类外部的其他函数
                # 静态成员函数有一个类范围，他们不能访问类的 this 指针 
                # 静态成员函数可以用来判断类的某些对象是否已被创建
                # 静态成员和静态成员函数可以用来得到要同时涉及到所有此类对象的操作
        # 类的隐式转换
            # c++可以定义如何将其他类型的对象隐式转换为我们的类类型或将我们的类类型的对象隐式转换为其他类型
            # 当构造函数传入参数的类型只有一个时 能将应使用类类型对象却使用构造函数参数类型的量隐式转换为类类型对象进行操作
            #   class_name obj = value
            # value为class_name类对象构造函数的参数 发生隐式转换
            # c++多态的特性 就是通过父类的对象实现对子类的封装 以父类的类型返回子类对象
            # c++中使用父类的地方一定可以使用子类代替 这也得益于隐式类型转换
            # c++是一种强类型的语言 有着非常严格的类型检查 采用隐式类型转换会使程序员更方便快捷一点
    # 继承
        # 继承允许我们依据另一个类来定义一个类
        # 类的继承
            # class derived-class: access-specifier base-class{}
            # 派生类可以访问基类中所有的非私有成员 因此基类成员如果不想被派生类的成员函数访问，则应在基类中声明为 private
            # 一个派生类继承了所有的基类方法，但下列情况除外 
                # 基类的构造函数 析构函数和拷贝构造函数
                # 基类的重载运算符
                # 基类的友元函数
        # 继承类型
            # 当一个类派生自基类，该基类可以被继承为 public protected 或 private 几种类型 继承类型是通过上面讲解的访问修饰符 access-specifier 来指定的
            # 我们几乎不使用 protected 或 private 继承，通常使用 public 继承
            # 公有继承（public）：基类的公有成员也是派生类的公有成员，基类的保护成员也是派生类的保护成员，基类的私有成员不能直接被派生类访问，但是可以通过调用基类的公有和保护成员来访问
            # 保护继承（protected）： 基类的公有和保护成员将成为派生类的保护成员
            # 私有继承（private）：基类的公有和保护成员将成为派生类的私有成员
        # 多继承
            #   class derived_class: access_specifier_1 base_class_1, access_specifier_2 base_class_2, ......{}
            # 多继承即一个子类可以有多个父类，它继承了多个父类的特性
    # 重载运算符与重载函数
        # C++ 允许在同一作用域中的某个函数和运算符指定多个定义，分别称为函数重载和运算符重载
        # 重载声明是指一个与之前已经在该作用域内声明过的函数或方法具有相同名称的声明，但是它们的参数列表和定义（实现）不相同
        # 当您调用一个重载函数或重载运算符时，编译器通过把您所使用的参数类型与定义中的参数类型进行比较，决定选用最合适的定义 选择最合适的重载函数或重载运算符的过程，称为重载决策
        # 重载函数
            #   type func(prams1, prams2, ...){}
            #   type func(prams3, prams4, ...){}
            # 在同一个作用域内，可以声明几个功能类似的同名函数，但是这些同名函数的形式参数（指参数的个数 类型或者顺序）必须不同
        # 重载运算符
            #   type operator opr(obj1, obj2, ...)
            # C++ 中的运算符重载可以重定义或重载大部分 C++ 内置的运算符 这样就能使用自定义类型的运算符
            # 重载的运算符是带有特殊名称的函数，函数名是由关键字 operator 和其后要重载的运算符符号构成的
            # 与其他函数一样，重载运算符有一个返回类型和一个参数列表
            # 自增自减如果是后自增自减要在后面额外加一个int作为参数 type operator ++(int)自动传零 相当于标注这是后自增自减
    # 多态(虚函数及纯虚函数)
        # 多态按字面的意思就是多种形态 当类之间存在层次结构，并且类之间是通过继承关联时，就会用到多态
        # C++ 多态意味着调用成员函数时，会根据调用函数的对象的类型来执行不同的函数
        # 有了多态，您可以有多个不同的类，都带有同一个名称但具有不同实现的函数，函数的参数甚至可以是相同的
        # 虚函数 
            #   virtual type func(){}
            # 虚函数是在基类中使用关键字 virtual 声明的函数 在派生类中重新定义基类中定义的虚函数时，会告诉编译器不要静态链接到该函数
            # 我们想要的是在程序中任意点可以根据所调用的对象类型来选择调用的函数，这种操作被称为动态链接，或后期绑定
        # 纯虚函数
            #   virtual type func() = 0;
            # 当想要在基类中定义虚函数，以便在派生类中重新定义该函数更好地适用于对象，但是您在基类中又不能对虚函数给出有意义的实现，这个时候就会用到纯虚函数
    # 模板
        # 模板是泛型编程的基础，泛型编程即以一种独立于任何特定类型的方式编写代码
        # 模板是创建泛型类或函数的蓝图或公式。库容器，比如迭代器和算法，都是泛型编程的例子，它们都使用了模板的概念
        #   template <typename1 T1, class T2 = type, type N ...> type func(prams){ };
        # 在这里，T1,T2 是函数所使用的数据类型的占位符名称 typename和class都表示定义一个类型 这个名称可以在函数定义中使用
        # N是type类型的非模版参数
# 非语法实用
    # 数学运算
        # double i = cos(double);
            # 该函数返回弧度角（double 型）的余弦 
        # double i = sin(double);
            # 该函数返回弧度角（double 型）的正弦 
        # double i = tan(double);
            # 该函数返回弧度角（double 型）的正切 
        # double i = log(double);
            # 该函数返回参数的自然对数 
        # double i = pow(double, double);
            # 假设第一个参数为 x，第二个参数为 y，则该函数返回 x 的 y 次方 
        # double i = hypot(double, double);
            # 该函数返回两个参数的平方总和的平方根，也就是说，参数为一个直角三角形的两个直角边，函数会返回斜边的长度 
        # double i = sqrt(double);
            # 该函数返回参数的平方根 
        # int i = abs(int);
            # 该函数返回整数的绝对值 
        # double i = fabs(double);
            # 该函数返回任意一个浮点数的绝对值 
        # double i = round(int)
            # 该函数返回一个传入参数四舍五入后的整数 
        # double i = ceil(double)
            # 该函数返回一个大于或等于传入参数的最小整数 
        # double i = floor(double);
            # 该函数返回一个小于或等于传入参数的最大整数 
    # 随机数
        # srand
            #   srand(unsigned int());
            # 设置一个整数位随机种子，来改变rand()的随机数序列，一般可以使用time(NULL)作为种子
        # rand
            #   int a = rand();
            # 根据随机数种子 随机生成一个整数
            #   int min = mn, max = mx;
            #   int b = min + rand() % ( max - min + 1 );
            # 随机生成一个min到(max + 1)的随机数(左闭右开)
            #   double randomFloat = rand() / static_cast<double>(RAND_MAX);
            # 生成一个0-1之间的随机浮点数
            #   double randomFloat = rand() / static_cast<double>(RAND_MAX) + rand();
            # 生成一个大于一的随机浮点数
    # 头文件
        # 如何自制头文件
            # 访达按住opt点前往选择资源库
            # 找到Developer->CommandLineTools->usr->include->c++->v1
            # 建一个文件夹 建议叫bits 如果之前做过这个操作可以直接去找bits文件夹
            # 将自制头文件(以stdc++为例)扔进bits夹中
            # 做完之后在cpp文件中便可以写#include <bits/stdc++.h>
            # 或者可以直接在桌面建文件夹(建议叫bits_来区分)便可以用#include "bits_/stdc++.h"
            # 方法一最好存储那些不会添加新内容的自制头文件想stdc++.h
            # 方法二可以用来存纯自己写的函数 适合自己用并且便于修改
            # 对于本电脑附带路径:/Library/Developer/CommandLineTools/SDKs/MacOSX13.3.sdk/usr/include/c++/v1/bits
        # 常用
            # iostream
            # iomanip
            # cmath
            # ctime
            # string
            # vector
            # algorithm
            # cassert
            # exception
    # 语句
        # system_pause
            #   void system_pause(){
            #     cout <<"press any key to continue....";
            #     getchar();
            #   }
            # 
        # 条件语句if...else...
            #   if(condition){}
            #   else if(condition){}
            #   else{}
            # 判断if里面的条件是否为真 若为真执行if里面的代码 若为假执行else里面的代码, else中放置if形成else if 可叠加
            # 三元运算符可以替换简单的if...else语句
        # 多选一代码块switch case 
            #   switch(condition){
            #      case value1:
            #          break;
            #      case value2:
            #          break;
            #      case value3:
            #          break;
            #      default:
            #   }
            # 当switch后面的变量值和case后面的常量值匹配相等后,case后面的代码将会被执行，直到break语句被执行后跳出switch代码块
            # break不是必须的，如果没有break，则执行完当前case的代码块后会继续执行后面case代码块的内容，直到执行break才可以退出
            # switch有一个默认的情况，我们用default关键词表示，当switch后面的变量和所有case后面的常量都不匹配的情况下,默认执行default后面的语句
            # continue不能被用在switch语句中
        # while循环
            #   while(condition){}
            # 只要指定条件为true，while循环就会循环遍历一段代码
        # do...while循环 
            #   do{}while(condition)
            # do while循环是while循环的变体 在判断条件是否为true之前，此循环将执行一次代码块，然后只要条件为true，它将重复该循环
        # for循环
            #   for( statement1; statement2; statement3 ){}
            # 当确切地知道要遍历代码块的次数时，使用for循环更方便而不是while循环
            # statement 1在执行代码块之前执行（一次）
            # statement 2定义了执行代码块的条件
            # 在执行代码块后（每次）都会执行statement 3
*/