#include <stdio.h>

int main(){
   int qian=0;
   while(1){
       printf("1---cunqian\n");
        printf("2---quqian\n");
        printf("3---yue\n");
        printf("4---tuichu\n");

        printf("gongneng\n");
        int code;
        scanf("%d",&code);

        if(code == 1){
         int cun;
            char x;
            printf("cunqian\n");
            scanf("%d",&cun);
            qian+=cun;

            printf("dianjihuiche\n");

            scanf("%c",&x);
            scanf("%c",&x);

        }
        if(code == 2){
         printf("quqian\n");
         int qu;
         char x;
         scanf("%d",&qu);

         if(qu > qian)
         {
          printf("yuebuzuoquqianshibai\n");
          char x;
           scanf("%c",&x);
           scanf("%c",&x);
         }
        else
        {
          qian -= qu;
          printf("quqianchenggongdianjihuichujixu\n");
          char x;
          scanf("%c",&x);
          scanf("%c",&x);
        }

        }
        if(code == 3){
        printf("yue%n");
        printf("%d\n",qian);
        char x;
	
         scanf("%c",&x);
         scanf("%c",&x);

        }
        if(code == 4){
        printf("chengxujieshu\n");
        break;

        }


   }

    return 0;

}