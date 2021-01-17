#include <stdio.h>
/* 标准输入，输出头 */
#include <stdlib.h>
/* 标准库头文件 */
#include <math.h>
/* 数学头文件 */
#include <time.h>
/* 时间头(随机数生成器基于时间) */
#define PI        3.14159265
/* 随机角度发生器所需的π长度（弧度） */
#define NEEDLE_LENGTH    1
/* 针的长度任意设定为一个单位 */
#define NEEDLEDROP 1000000
/* 每次实验投下的针数 */
int main()
{
    float    closestLineDistance;
    /* 针中心距垂直线距离 */
    float    crossingAngle;
    /* 针穿过垂直线的角度 */
    float    verticalLineSpacing;
    /* 垂直线之间的间距 */
    int    linesCrossed    = 0;
    /* 确定交叉线数的计数器 */
    int    needlesDropped    = NEEDLEDROP;
    /* 确定落针数的计数器 */
    float    approximatePiValue;
    /* 计算出的Pi近似值 */
    float    crossChecker;
    /* 用于确定针是否穿过垂直线的变量 */
    int    needleDropSample = 0;
    /* 要落针的（用户确定的）针数 */
    verticalLineSpacing = (2 * NEEDLE_LENGTH);
    /* 将垂直行距设置为针长度的两倍 */
    for ( int i = 1; i <= needleDropSample; i++ )
    {
        srand( (unsigned) time( NULL ) + rand() );
        /* 初始化随机数生成器 */
        closestLineDistance = rand() / (1.0 * RAND_MAX);
        //生成0-1的随机数
        needlesDropped++;
        /* 实质上对输入的数据进行计数 */
        crossingAngle    = (PI / 2.0) * ( (float) rand() / (float) RAND_MAX);
        /*选择0到90度之间的随机角度 */
        crossChecker    = (NEEDLE_LENGTH / 2.0) * sinf( crossingAngle );
        /* 用于确定针是否穿过垂直线 */
        if ( closestLineDistance <= crossChecker )
        /* 确定垂直线是否交叉 */
        {
            linesCrossed++;
            /* 确定垂直线是否交叉 */
        }
    }
    approximatePiValue = (2 * NEEDLE_LENGTH * needlesDropped) / (verticalLineSpacing * linesCrossed);
    /* 确定Pi的公式 */
    printf( "nn落针数为： %d", needlesDropped );
    /* 尝试选取较大的值 */
    printf( "nn交叉线数为： %d", linesCrossed );
    /* 没有必要，但很有意思 */
    printf( "nn基于上述数据的Pi近似值为： %fnn", approximatePiValue );
    /* 这个值显然趋向于变化，但它是精确的 */
    return(0);
}
