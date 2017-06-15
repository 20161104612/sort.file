//
//  main.c
//  sort
//
//  Created by 20161104612 on 2017/6/15.
//  Copyright © 2017年 20161104612. All rights reserved.
//

#include <stdio.h>

int main() {
    int i,a[10],j,t;
    FILE *fp1 = fopen("//Users//a20161104612//Desktop//sort//fp1.txt","r+");
    FILE *fp2 = fopen("//Users//a20161104612//Desktop//sort//fp2.txt","w");
    if(fp1==NULL)
    {
        printf("打开文件夹失败!\n");
    }
    else
    {
        for(i=0;i<10;i++)
        {
            fscanf(fp1,"%d ",&a[i]);
            printf("%d ",a[i]);
        }
        printf("\n");
        for(j=0;j<9;j++)
        {
            for(i=0;i<=8-j;i++)
            {
                if(a[i]>a[i+1])
                {
                    t=a[i];
                    a[i]=a[i+1];
                    a[i+1]=t;
                }
            }
        }
        for(i=0;i<10;i++)
        {
            fprintf(fp2,"%d ",a[i]);
        }
        for(i=0;i<10;i++)
        {
            fscanf(fp2,"%d ",&a[i]);
            printf("%d ",a[i]);
        }
        fclose(fp1);
        fclose(fp2);
    }
    return 0;
}
