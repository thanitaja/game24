#include<stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
struct number{
    int num1,num2,num3,num4;
}num;

struct tester{
    int num1,num2,num3,num4,n;
}cop;

struct operan{
    char op1,op2,op3;
}oper;

struct idplay{
    char name[200];
    float timer;
}id[50];

int random(int start){
    int i,r,question;
    int quiz[100]={ 1245,1246,1247,1248,1249,1256,1257,1258,1259,1267,1268,1269,1278,1279,1289,1356,1357,1358,1359,1367,
                    1368,1369,1378,1379,1389,1467,1469,1478,1479,1489,1578,1589,1689,1789,2345,2346,2347,2348,2349,2367,
                    2368,2369,2378,2379,2389,2456,2457,2458,2459,2478,2479,2489,2567,2568,2569,2589,2678,2679,2689,2789,
                    3456,3457,3458,3459,3467,3468,3469,3489,3567,3568,3569,3578,3579,3589,3679,3689,4567,4569,4578,4579,
                    4589,4679,4789,5678,5689,6789};
    srand(time(0));
    r=0+rand()%86;
    question=quiz[r];
    num.num4=(question/1000)%10;
    num.num3=(question/100)%10;
    num.num2=(question/10)%10;
    num.num1=question%10;
    return question;
}


int tester(int anw[]){
    int c,sum=0;
    cop.num4=num.num4;
    cop.num3=num.num3;
    cop.num2=num.num2;
    cop.num1=num.num1;
    for(c=0;c<4;c++){
        if(anw[c]==cop.num1){
            sum=sum+1;
            cop.num1=10;
        }
        if(anw[c]==cop.num2){
            sum=sum+1;
            cop.num2=10;
        }
        if(anw[c]==cop.num3){
            sum=sum+1;
            cop.num3=10;
        }
        if(anw[c]==cop.num4){
            sum=sum+1;
            cop.num4=10;
        }
    }
    return sum;
}

//==================================================================================Calculate==============================================
//==================================================================================format1==============================================

int format1(int res[],struct operan oper){
    int anwsyou;
    if(oper.op1=='+'){ // +
        anwsyou=add(res[0],res[1]);
        if(oper.op2=='+'){
            anwsyou=add(anwsyou,res[2]);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou,res[3]);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou,res[3]);
                     }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou,res[3]);
                     }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou,res[3]);
                     }
         }
        else if(oper.op2=='-'){
            anwsyou=minus(anwsyou,res[2]);
            if(oper.op3=='+'){
                 anwsyou=add(anwsyou,res[3]);
                     }
             else if(oper.op3=='-'){
                 anwsyou=minus(anwsyou,res[3]);
                      }
             else if(oper.op3=='*'){
                 anwsyou=multiply(anwsyou,res[3]);
                      }
             else if(oper.op3=='/'){
                 anwsyou=divide(anwsyou,res[3]);
                       }
        }
        else if(oper.op2=='*'){
            anwsyou=multiply(anwsyou,res[2]);
            if(oper.op3=='+'){
                 anwsyou=add(anwsyou,res[3]);
                      }
            else if(oper.op3=='-'){
                 anwsyou=minus(anwsyou,res[3]);
                      }
            else if(oper.op3=='*'){
                 anwsyou=multiply(anwsyou,res[3]);
                      }
            else if(oper.op3=='/'){
                 anwsyou=divide(anwsyou,res[3]);
                      }
        }
        else if(oper.op2=='/'){
            anwsyou=divide(anwsyou,res[2]);
            if(oper.op3=='+'){
                 anwsyou=add(anwsyou,res[3]);
                       }
            else if(oper.op3=='-'){
                 anwsyou=minus(anwsyou,res[3]);
                       }
            else if(oper.op3=='*'){
                 anwsyou=multiply(anwsyou,res[3]);
                      }
            else if(oper.op3=='/'){
                 anwsyou=divide(anwsyou,res[3]);
                     }
         }
   }
   else if(oper.op1=='-'){  //-
        anwsyou=minus(res[0],res[1]);
        if(oper.op2=='+'){
           anwsyou=add(anwsyou,res[2]);
           if(oper.op3=='+'){
                 anwsyou=add(anwsyou,res[3]);
                      }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou,res[3]);
                     }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou,res[3]);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou,res[3]);
                    }
        }
        else if(oper.op2=='-'){
            anwsyou=minus(anwsyou,res[2]);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou,res[3]);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou,res[3]);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou,res[3]);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou,res[3]);
                    }
                }
        else if(oper.op2=='*'){
            anwsyou=multiply(anwsyou,res[2]);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou,res[3]);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou,res[3]);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou,res[3]);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou,res[3]);
                    }
         }
         else if(oper.op2=='/'){
            anwsyou=divide(anwsyou,res[2]);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou,res[3]);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou,res[3]);
                }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou,res[3]);
                }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou,res[3]);
                }
        }
    }
    else if(oper.op1=='*'){  //*
        anwsyou=multiply(res[0],res[1]);
        if(oper.op2=='+'){
            anwsyou=add(anwsyou,res[2]);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou,res[3]);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou,res[3]);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou,res[3]);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou,res[3]);
                    }
            }
        else if(oper.op2=='-'){
            anwsyou=minus(anwsyou,res[2]);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou,res[3]);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou,res[3]);
                 }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou,res[3]);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou,res[3]);
                    }
            }
        else if(oper.op2=='*'){
            anwsyou=multiply(anwsyou,res[2]);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou,res[3]);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou,res[3]);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou,res[3]);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou,res[3]);
                }
            }
        else if(oper.op2=='/'){
            anwsyou=divide(anwsyou,res[2]);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou,res[3]);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou,res[3]);
                }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou,res[3]);
                }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou,res[3]);
                }
            }
      }
    else if(oper.op1=='/'){  // /
        anwsyou=divide(res[0],res[1]);
        if(oper.op2=='+'){
            anwsyou=add(anwsyou,res[2]);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou,res[3]);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou,res[3]);
                 }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou,res[3]);
                }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou,res[3]);
                }
            }
        else if(oper.op2=='-'){
            anwsyou=minus(anwsyou,res[2]);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou,res[3]);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou,res[3]);
                }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou,res[3]);
                }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou,res[3]);
                }
           }
        else if(oper.op2=='*'){
            anwsyou=multiply(anwsyou,res[2]);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou,res[3]);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou,res[3]);
            }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou,res[3]);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou,res[3]);
                    }
            }
        else if(oper.op2=='/'){
            anwsyou=divide(anwsyou,res[2]);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou,res[3]);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou,res[3]);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou,res[3]);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou,res[3]);
                }
        }
    }
    return anwsyou;
}

//==================================================================================format2==============================================

int format2(int res[],struct operan oper){
    int anwsyou_bracket1,anwsyou,anwsyou_bracket2;
    if(oper.op1=='+'){ // +
        anwsyou_bracket1=add(res[0],res[1]);
        if(oper.op2=='+'){
            anwsyou_bracket2=add(res[2],res[3]);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou_bracket1,anwsyou_bracket2);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou_bracket1,anwsyou_bracket2);
                }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou_bracket1,anwsyou_bracket2);
                }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou_bracket1,anwsyou_bracket2);
                }
            }
        else if(oper.op2=='-'){
            anwsyou_bracket2=minus(res[2],res[3]);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou_bracket1,anwsyou_bracket2);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou_bracket1,anwsyou_bracket2);
                }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou_bracket1,anwsyou_bracket2);
                }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou_bracket1,anwsyou_bracket2);
                }
            }
        else if(oper.op2=='*'){
            anwsyou_bracket2=multiply(res[2],res[3]);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou_bracket1,anwsyou_bracket2);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou_bracket1,anwsyou_bracket2);
                }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou_bracket1,anwsyou_bracket2);
                }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou_bracket1,anwsyou_bracket2);
                }
            }
        else if(oper.op2=='/'){
            anwsyou_bracket2=divide(res[2],res[3]);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou_bracket1,anwsyou_bracket2);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou_bracket1,anwsyou_bracket2);
                }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou_bracket1,anwsyou_bracket2);
                }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou_bracket1,anwsyou_bracket2);
                    }
            }
    }


    else if(oper.op1=='-'){  //-
        anwsyou_bracket1=minus(res[0],res[1]);
        if(oper.op2=='+'){
            anwsyou_bracket2=add(res[2],res[3]);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou_bracket1,anwsyou_bracket2);
                    }
            }
         else if(oper.op2=='-'){
            anwsyou_bracket2=minus(res[2],res[3]);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou_bracket1,anwsyou_bracket2);
                    }
            }
        else if(oper.op2=='*'){
            anwsyou_bracket2=multiply(res[2],res[3]);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou_bracket1,anwsyou_bracket2);
                    }
            }
        else if(oper.op2=='/'){
            anwsyou_bracket2=divide(res[2],res[3]);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou_bracket1,anwsyou_bracket2);
                    }
                }
        }

    else if(oper.op1=='*'){  //*
        anwsyou_bracket1=multiply(res[0],res[1]);
        if(oper.op2=='+'){
            anwsyou_bracket2=add(res[2],res[3]);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou_bracket1,anwsyou_bracket2);
                    }
            }
        else if(oper.op2=='-'){
            anwsyou_bracket2=minus(res[2],res[3]);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou_bracket1,anwsyou_bracket2);
                    }
            }
        else if(oper.op2=='*'){
            anwsyou_bracket2=multiply(res[2],res[3]);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou_bracket1,anwsyou_bracket2);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou_bracket1,anwsyou_bracket2);
                }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou_bracket1,anwsyou_bracket2);
                }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou_bracket1,anwsyou_bracket2);
                }
            }
        else if(oper.op2=='/'){
            anwsyou_bracket2=divide(res[2],res[3]);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou_bracket1,anwsyou_bracket2);
                        }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou_bracket1,anwsyou_bracket2);
                }
            }
        }


    else if(oper.op1=='/'){  // /
        anwsyou_bracket1=divide(res[0],res[1]);
        if(oper.op2=='+'){
            anwsyou_bracket2=add(res[2],res[3]);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou_bracket1,anwsyou_bracket2);
                        }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou_bracket1,anwsyou_bracket2);
                        }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou_bracket1,anwsyou_bracket2);
                        }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou_bracket1,anwsyou_bracket2);
                        }
            }
        else if(oper.op2=='-'){
            anwsyou_bracket2=minus(res[2],res[3]);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou_bracket1,anwsyou_bracket2);
                    }
            }
        else if(oper.op2=='*'){
            anwsyou_bracket2=multiply(res[2],res[3]);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou_bracket1,anwsyou_bracket2);
                    }
            }
        else if(oper.op2=='/'){
            anwsyou_bracket2=divide(res[2],res[3]);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou_bracket1,anwsyou_bracket2);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou_bracket1,anwsyou_bracket2);
                    }
            }
        }
                    return anwsyou;
}

//==================================================================================format3==============================================

int format3(int res[],struct operan oper){
    int anwsyou;
    if(oper.op1=='+'){ // +
        anwsyou=add(res[0],res[1]);
        if(oper.op2=='+'){
            anwsyou=add(anwsyou,res[2]);
            if(oper.op3=='+'){
                anwsyou=add(res[3],anwsyou);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(res[3],anwsyou);
                     }
            else if(oper.op3=='*'){
                anwsyou=multiply(res[3],anwsyou);
                     }
            else if(oper.op3=='/'){
                anwsyou=divide(res[3],anwsyou);
                     }
         }
        else if(oper.op2=='-'){
            anwsyou=minus(anwsyou,res[2]);
            if(oper.op3=='+'){
                 anwsyou=add(res[3],anwsyou);
                     }
             else if(oper.op3=='-'){
                 anwsyou=minus(res[3],anwsyou);
                      }
             else if(oper.op3=='*'){
                 anwsyou=multiply(res[3],anwsyou);
                      }
             else if(oper.op3=='/'){
                 anwsyou=divide(res[3],anwsyou);
                       }
        }
        else if(oper.op2=='*'){
            anwsyou=multiply(anwsyou,res[2]);
            if(oper.op3=='+'){
                 anwsyou=add(res[3],anwsyou);
                      }
            else if(oper.op3=='-'){
                 anwsyou=minus(res[3],anwsyou);
                      }
            else if(oper.op3=='*'){
                 anwsyou=multiply(res[3],anwsyou);
                      }
            else if(oper.op3=='/'){
                 anwsyou=divide(res[3],anwsyou);
                      }
        }
        else if(oper.op2=='/'){
            anwsyou=divide(anwsyou,res[2]);
            if(oper.op3=='+'){
                 anwsyou=add(res[3],anwsyou);
                       }
            else if(oper.op3=='-'){
                 anwsyou=minus(res[3],anwsyou);
                       }
            else if(oper.op3=='*'){
                 anwsyou=multiply(res[3],anwsyou);
                      }
            else if(oper.op3=='/'){
                 anwsyou=divide(res[3],anwsyou);
                     }
         }
   }
   else if(oper.op1=='-'){  //-
        anwsyou=minus(res[0],res[1]);
        if(oper.op2=='+'){
           anwsyou=add(anwsyou,res[2]);
           if(oper.op3=='+'){
                 anwsyou=add(res[3],anwsyou);
                      }
            else if(oper.op3=='-'){
                anwsyou=minus(res[3],anwsyou);
                     }
            else if(oper.op3=='*'){
                anwsyou=multiply(res[3],anwsyou);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(res[3],anwsyou);
                    }
        }
        else if(oper.op2=='-'){
            anwsyou=minus(anwsyou,res[2]);
            if(oper.op3=='+'){
                anwsyou=add(res[3],anwsyou);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(res[3],anwsyou);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(res[3],anwsyou);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(res[3],anwsyou);
                    }
                }
        else if(oper.op2=='*'){
            anwsyou=multiply(anwsyou,res[2]);
            if(oper.op3=='+'){
                anwsyou=add(res[3],anwsyou);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(res[3],anwsyou);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(res[3],anwsyou);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(res[3],anwsyou);
                    }
         }
         else if(oper.op2=='/'){
            anwsyou=divide(anwsyou,res[2]);
            if(oper.op3=='+'){
                anwsyou=add(res[3],anwsyou);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(res[3],anwsyou);
                }
            else if(oper.op3=='*'){
                anwsyou=multiply(res[3],anwsyou);
                }
            else if(oper.op3=='/'){
                anwsyou=divide(res[3],anwsyou);
                }
        }
    }
    else if(oper.op1=='*'){  //*
        anwsyou=multiply(res[0],res[1]);
        if(oper.op2=='+'){
            anwsyou=add(anwsyou,res[2]);
            if(oper.op3=='+'){
                anwsyou=add(res[3],anwsyou);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(res[3],anwsyou);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(res[3],anwsyou);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(res[3],anwsyou);
                    }
            }
        else if(oper.op2=='-'){
            anwsyou=minus(anwsyou,res[2]);
            if(oper.op3=='+'){
                anwsyou=add(res[3],anwsyou);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(res[3],anwsyou);
                 }
            else if(oper.op3=='*'){
                anwsyou=multiply(res[3],anwsyou);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(res[3],anwsyou);
                    }
            }
        else if(oper.op2=='*'){
            anwsyou=multiply(anwsyou,res[2]);
            if(oper.op3=='+'){
                anwsyou=add(res[3],anwsyou);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(res[3],anwsyou);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(res[3],anwsyou);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(res[3],anwsyou);
                }
            }
        else if(oper.op2=='/'){
            anwsyou=divide(anwsyou,res[2]);
            if(oper.op3=='+'){
                anwsyou=add(res[3],anwsyou);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(res[3],anwsyou);
                }
            else if(oper.op3=='*'){
                anwsyou=multiply(res[3],anwsyou);
                }
            else if(oper.op3=='/'){
                anwsyou=divide(res[3],anwsyou);
                }
            }
      }
    else if(oper.op1=='/'){  // /
        anwsyou=divide(res[0],res[1]);
        if(oper.op2=='+'){
            anwsyou=add(anwsyou,res[2]);
            if(oper.op3=='+'){
                anwsyou=add(res[3],anwsyou);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(res[3],anwsyou);
                 }
            else if(oper.op3=='*'){
                anwsyou=multiply(res[3],anwsyou);
                }
            else if(oper.op3=='/'){
                anwsyou=divide(res[3],anwsyou);
                }
            }
        else if(oper.op2=='-'){
            anwsyou=minus(anwsyou,res[2]);
            if(oper.op3=='+'){
                anwsyou=add(res[3],anwsyou);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(res[3],anwsyou);
                }
            else if(oper.op3=='*'){
                anwsyou=multiply(res[3],anwsyou);
                }
            else if(oper.op3=='/'){
                anwsyou=divide(res[3],anwsyou);
                }
           }
        else if(oper.op2=='*'){
            anwsyou=multiply(anwsyou,res[2]);
            if(oper.op3=='+'){
                anwsyou=add(res[3],anwsyou);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(res[3],anwsyou);
            }
            else if(oper.op3=='*'){
                anwsyou=multiply(res[3],anwsyou);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(res[3],anwsyou);
                    }
            }
        else if(oper.op2=='/'){
            anwsyou=divide(anwsyou,res[2]);
            if(oper.op3=='+'){
                anwsyou=add(res[3],anwsyou);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(res[3],anwsyou);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(res[3],anwsyou);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(res[3],anwsyou);
                }
        }
    }
    return anwsyou;
}

//==================================================================================format4==============================================

int format4(int res[],struct operan oper){
    int anwsyou;
    if(oper.op1=='+'){ // +
        anwsyou=add(res[0],res[1]);
        if(oper.op2=='+'){
            anwsyou=add(res[2],anwsyou);
            if(oper.op3=='+'){
                anwsyou=add(res[3],anwsyou);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(res[3],anwsyou);
                     }
            else if(oper.op3=='*'){
                anwsyou=multiply(res[3],anwsyou);
                     }
            else if(oper.op3=='/'){
                anwsyou=divide(res[3],anwsyou);
                     }
         }
        else if(oper.op2=='-'){
            anwsyou=minus(res[2],anwsyou);
            if(oper.op3=='+'){
                 anwsyou=add(res[3],anwsyou);
                     }
             else if(oper.op3=='-'){
                 anwsyou=minus(res[3],anwsyou);
                      }
             else if(oper.op3=='*'){
                 anwsyou=multiply(res[3],anwsyou);
                      }
             else if(oper.op3=='/'){
                 anwsyou=divide(res[3],anwsyou);
                       }
        }
        else if(oper.op2=='*'){
            anwsyou=multiply(res[2],anwsyou);
            if(oper.op3=='+'){
                 anwsyou=add(res[3],anwsyou);
                      }
            else if(oper.op3=='-'){
                 anwsyou=minus(res[3],anwsyou);
                      }
            else if(oper.op3=='*'){
                 anwsyou=multiply(res[3],anwsyou);
                      }
            else if(oper.op3=='/'){
                 anwsyou=divide(res[3],anwsyou);
                      }
        }
        else if(oper.op2=='/'){
            anwsyou=divide(res[2],anwsyou);
            if(oper.op3=='+'){
                 anwsyou=add(res[3],anwsyou);
                       }
            else if(oper.op3=='-'){
                 anwsyou=minus(res[3],anwsyou);
                       }
            else if(oper.op3=='*'){
                 anwsyou=multiply(res[3],anwsyou);
                      }
            else if(oper.op3=='/'){
                 anwsyou=divide(res[3],anwsyou);
                     }
         }
   }
   else if(oper.op1=='-'){  //-
        anwsyou=minus(res[0],res[1]);
        if(oper.op2=='+'){
           anwsyou=add(res[2],anwsyou);
           if(oper.op3=='+'){
                 anwsyou=add(res[3],anwsyou);
                      }
            else if(oper.op3=='-'){
                anwsyou=minus(res[3],anwsyou);
                     }
            else if(oper.op3=='*'){
                anwsyou=multiply(res[3],anwsyou);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(res[3],anwsyou);
                    }
        }
        else if(oper.op2=='-'){
            anwsyou=minus(res[2],anwsyou);
            if(oper.op3=='+'){
                anwsyou=add(res[3],anwsyou);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(res[3],anwsyou);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(res[3],anwsyou);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(res[3],anwsyou);
                    }
                }
        else if(oper.op2=='*'){
            anwsyou=multiply(res[2],anwsyou);
            if(oper.op3=='+'){
                anwsyou=add(res[3],anwsyou);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(res[3],anwsyou);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(res[3],anwsyou);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(res[3],anwsyou);
                    }
         }
         else if(oper.op2=='/'){
            anwsyou=divide(res[2],anwsyou);
            if(oper.op3=='+'){
                anwsyou=add(res[3],anwsyou);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(res[3],anwsyou);
                }
            else if(oper.op3=='*'){
                anwsyou=multiply(res[3],anwsyou);
                }
            else if(oper.op3=='/'){
                anwsyou=divide(res[3],anwsyou);
                }
        }
    }
    else if(oper.op1=='*'){  //*
        anwsyou=multiply(res[0],res[1]);
        if(oper.op2=='+'){
            anwsyou=add(res[2],anwsyou);
            if(oper.op3=='+'){
                anwsyou=add(res[3],anwsyou);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(res[3],anwsyou);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(res[3],anwsyou);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(res[3],anwsyou);
                    }
            }
        else if(oper.op2=='-'){
            anwsyou=minus(res[2],anwsyou);
            if(oper.op3=='+'){
                anwsyou=add(res[3],anwsyou);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(res[3],anwsyou);
                 }
            else if(oper.op3=='*'){
                anwsyou=multiply(res[3],anwsyou);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(res[3],anwsyou);
                    }
            }
        else if(oper.op2=='*'){
            anwsyou=multiply(res[2],anwsyou);
            if(oper.op3=='+'){
                anwsyou=add(res[3],anwsyou);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(res[3],anwsyou);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(res[3],anwsyou);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(res[3],anwsyou);
                }
            }
        else if(oper.op2=='/'){
            anwsyou=divide(res[2],anwsyou);
            if(oper.op3=='+'){
                anwsyou=add(res[3],anwsyou);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(res[3],anwsyou);
                }
            else if(oper.op3=='*'){
                anwsyou=multiply(res[3],anwsyou);
                }
            else if(oper.op3=='/'){
                anwsyou=divide(res[3],anwsyou);
                }
            }
      }
    else if(oper.op1=='/'){  // /
        anwsyou=divide(res[0],res[1]);
        if(oper.op2=='+'){
            anwsyou=add(res[2],anwsyou);
            if(oper.op3=='+'){
                anwsyou=add(res[3],anwsyou);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(res[3],anwsyou);
                 }
            else if(oper.op3=='*'){
                anwsyou=multiply(res[3],anwsyou);
                }
            else if(oper.op3=='/'){
                anwsyou=divide(res[3],anwsyou);
                }
            }
        else if(oper.op2=='-'){
            anwsyou=minus(res[2],anwsyou);
            if(oper.op3=='+'){
                anwsyou=add(res[3],anwsyou);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(res[3],anwsyou);
                }
            else if(oper.op3=='*'){
                anwsyou=multiply(res[3],anwsyou);
                }
            else if(oper.op3=='/'){
                anwsyou=divide(res[3],anwsyou);
                }
           }
        else if(oper.op2=='*'){
            anwsyou=multiply(res[2],anwsyou);
            if(oper.op3=='+'){
                anwsyou=add(res[3],anwsyou);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(res[3],anwsyou);
            }
            else if(oper.op3=='*'){
                anwsyou=multiply(res[3],anwsyou);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(res[3],anwsyou);
                    }
            }
        else if(oper.op2=='/'){
            anwsyou=divide(res[2],anwsyou);
            if(oper.op3=='+'){
                anwsyou=add(res[3],anwsyou);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(res[3],anwsyou);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(res[3],anwsyou);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(res[3],anwsyou);
                }
        }
    }
    return anwsyou;
}
//==================================================================================format5==============================================

int format5(int res[],struct operan oper){
    int anwsyou;
    if(oper.op1=='+'){ // +
        anwsyou=add(res[0],res[1]);
        if(oper.op2=='+'){
            anwsyou=add(res[2],anwsyou);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou,res[3]);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou,res[3]);
                     }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou,res[3]);
                     }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou,res[3]);
                     }
         }
        else if(oper.op2=='-'){
            anwsyou=minus(res[2],anwsyou);
            if(oper.op3=='+'){
                 anwsyou=add(anwsyou,res[3]);
                     }
             else if(oper.op3=='-'){
                 anwsyou=minus(anwsyou,res[3]);
                      }
             else if(oper.op3=='*'){
                 anwsyou=multiply(anwsyou,res[3]);
                      }
             else if(oper.op3=='/'){
                 anwsyou=divide(anwsyou,res[3]);
                       }
        }
        else if(oper.op2=='*'){
            anwsyou=multiply(res[2],anwsyou);
            if(oper.op3=='+'){
                 anwsyou=add(anwsyou,res[3]);
                      }
            else if(oper.op3=='-'){
                 anwsyou=minus(anwsyou,res[3]);
                      }
            else if(oper.op3=='*'){
                 anwsyou=multiply(anwsyou,res[3]);
                      }
            else if(oper.op3=='/'){
                 anwsyou=divide(anwsyou,res[3]);
                      }
        }
        else if(oper.op2=='/'){
            anwsyou=divide(res[2],anwsyou);
            if(oper.op3=='+'){
                 anwsyou=add(anwsyou,res[3]);
                       }
            else if(oper.op3=='-'){
                 anwsyou=minus(anwsyou,res[3]);
                       }
            else if(oper.op3=='*'){
                 anwsyou=multiply(anwsyou,res[3]);
                      }
            else if(oper.op3=='/'){
                 anwsyou=divide(anwsyou,res[3]);
                     }
         }
   }
   else if(oper.op1=='-'){  //-
        anwsyou=minus(res[0],res[1]);
        if(oper.op2=='+'){
           anwsyou=add(res[2],anwsyou);
           if(oper.op3=='+'){
                 anwsyou=add(anwsyou,res[3]);
                      }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou,res[3]);
                     }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou,res[3]);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou,res[3]);
                    }
        }
        else if(oper.op2=='-'){
            anwsyou=minus(res[2],anwsyou);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou,res[3]);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou,res[3]);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou,res[3]);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou,res[3]);
                    }
                }
        else if(oper.op2=='*'){
            anwsyou=multiply(res[2],anwsyou);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou,res[3]);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou,res[3]);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou,res[3]);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou,res[3]);
                    }
         }
         else if(oper.op2=='/'){
            anwsyou=divide(res[2],anwsyou);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou,res[3]);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou,res[3]);
                }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou,res[3]);
                }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou,res[3]);
                }
        }
    }
    else if(oper.op1=='*'){  //*
        anwsyou=multiply(res[0],res[1]);
        if(oper.op2=='+'){
            anwsyou=add(res[2],anwsyou);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou,res[3]);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou,res[3]);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou,res[3]);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou,res[3]);
                    }
            }
        else if(oper.op2=='-'){
            anwsyou=minus(res[2],anwsyou);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou,res[3]);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou,res[3]);
                 }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou,res[3]);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou,res[3]);
                    }
            }
        else if(oper.op2=='*'){
            anwsyou=multiply(res[2],anwsyou);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou,res[3]);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou,res[3]);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou,res[3]);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou,res[3]);
                }
            }
        else if(oper.op2=='/'){
            anwsyou=divide(res[2],anwsyou);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou,res[3]);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou,res[3]);
                }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou,res[3]);
                }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou,res[3]);
                }
            }
      }
    else if(oper.op1=='/'){  // /
        anwsyou=divide(res[0],res[1]);
        if(oper.op2=='+'){
            anwsyou=add(res[2],anwsyou);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou,res[3]);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou,res[3]);
                 }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou,res[3]);
                }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou,res[3]);
                }
            }
        else if(oper.op2=='-'){
            anwsyou=minus(res[2],anwsyou);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou,res[3]);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou,res[3]);
                }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou,res[3]);
                }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou,res[3]);
                }
           }
        else if(oper.op2=='*'){
            anwsyou=multiply(res[2],anwsyou);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou,res[3]);
                }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou,res[3]);
            }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou,res[3]);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou,res[3]);
                    }
            }
        else if(oper.op2=='/'){
            anwsyou=divide(res[2],anwsyou);
            if(oper.op3=='+'){
                anwsyou=add(anwsyou,res[3]);
                    }
            else if(oper.op3=='-'){
                anwsyou=minus(anwsyou,res[3]);
                    }
            else if(oper.op3=='*'){
                anwsyou=multiply(anwsyou,res[3]);
                    }
            else if(oper.op3=='/'){
                anwsyou=divide(anwsyou,res[3]);
                }
        }
    }
    return anwsyou;
}
//==================================================================================Calculate==============================================
int add(int num1,int num2){
    return num1+num2;
}
int minus(int num1,int num2){
    return num1-num2;
}
int multiply(int num1,int num2){
    return num1*num2;
}
int divide(int num1,int num2){
    return num1/num2;
}
//===============================================================================sort=====================================================

void sort(int n){
        FILE *score;
        FILE *best;
        float time[100],temp;
        int i,j,k;
        char tempname[100],name[100][100];
        printf("\n\t==========================================================================================================");
        printf("\n\t======================================= THANK YOU TO PLAY ================================================");
        printf("\n\t==================================== THIS IS THE BEST TIMES ==============================================");
        printf("\n\t==========================================================================================================\n");
        score=fopen("score.txt","a");
        for(i=0;i<n;i++){
            fprintf(score,"%s \t %.2f\n",id[i].name,id[i].timer);
        }
        fclose(score);
        best=fopen("score.txt","r");
        for(i=0;fscanf(best,"%s %f",name[i],&time[i])!=EOF;i++){
    }
    for(j=0;j<i;j++){
        for(k=j+1;k<i;k++){
            if(time[k]<time[j]){
                temp=time[j];
                time[j]=time[k];
                time[k]=temp;
                strcpy(tempname,name[j]);
                strcpy(name[j],name[k]);
                strcpy(name[k],tempname);
            }
        }
    }
    for(j=0;j<i;j++){
        printf("\n\t\t\t\t %d \t %s \t\t\t\t %.2f\n",j+1,name[j],time[j]);
    }
    fclose(best);
        printf("\n\t==========================================================================================================");
        printf("\n\t==========================================================================================================");
    score=fopen("score.txt","w");
        for(j=0;j<i;j++){
            fprintf(score,"%s \t %.2f\n",name[j],time[j]);
        }
    fclose(score);
    getch();
}


//_________________________________________________________________________________________________________________________________

/////===================================================================main=========================================================================
main(){
    int quiz,numberplay,len,anwsyou,i,j,c,res[3];
    time_t start,end,last;
    char anws[14],test;

    printf("\n\t============================================================================================================");
    printf("\n\t============================================= HELLO 24 =====================================================");
    printf("\n\t============================================================================================================");
    printf("\n\n\n\n\t\t\t\t\t\t 1. PLAY");
    printf("\n\n\t\t\t\t\t\t 2. HOW TO\n\n\n");
    printf("\n\t============================================================================================================");
    printf("\n\t====================================== PLEASE ENTER NUMBER =================================================");
    printf("\n\t============================================================================================================\n");
    test=getch();
    system("cls");
// how to
if(test=='2'){
    printf("\n\t=======================================================================================================");
    printf("\n\t========================================== HOW TO PLAY ================================================");
    printf("\n\t=======================================================================================================\n");
    printf("\n\n\t\t\tEnter the name to save time the player can do. By the way.The game will\n");
    printf("\n\t\t\trandomly number all four numbers from 0-9.Player must be calculated\n");
    printf("\n\t\t\tover the entire number 4 to perform arithmetic operations (addition,\n");
    printf("\n\t\t\tsubtraction,multiplication,division),the result is 24.\n\n");
    printf("\n\t=======================================================================================================");
    printf("\n\t=================================== PLEASE ENTER TO CONTINUE. ========================================");
    printf("\n\t=======================================================================================================\n");
    getch();
    system("cls");
    printf("\n\t=======================================================================================================\n");
    printf("\n\t\t\t Answer format :: 1 ( x _ x ) _ ( x _ x )\n\n");
    printf("\t\t\t                  2 ( ( x _ x ) _ x ) _ x\n\n");
    printf("\t\t\t                  3 x _ ( ( x _ x ) _ x )\n\n");
    printf("\t\t\t                  4 x _ ( x _ ( x _ x ) )\n\n");
    printf("\t\t\t                  5 ( x _ x ) _ x _ x\n\n");
    printf("\t\t\t                  6 x _ ( x _ x ) _ x\n\n");
    printf("\t\t\t                  7 x _ x _ ( x _ x )\n\n");
    printf("\t\t\t                  8 x _ x _ x _ x\n\n");
    printf("\t\t\t                  9 ( x _ ( x _ x ) ) _ x\n\n");
    printf("\t\t\t x = Number \n\n");
    printf("\t\t\t _ = Operator \n\n");
    printf("\n\t=======================================================================================================");
    printf("\n\t=================================== PLEASE ENTER TO PLAY. =============================================");
    printf("\n\t=======================================================================================================\n");
    getch();
    test=1;
    system("cls");
}
// game
    printf("\n\t=============================================================================================================");
    printf("\n\t========================================== WELLCOME TO 24 GAME ==============================================");
    printf("\n\t=============================================================================================================\n");
    printf("\n\t\t\t NUMBER OF PLAYER :: ");
    scanf("%d",&numberplay);
    cop.n=numberplay;
    double dif; //เวลา

    for(i=0;i<cop.n;i++){
        printf("\n\t\t\t PLEASE ENTER PLAYER NAME %d :: ",i+1);
        scanf("%s",id[i].name);
    }
    printf("\n\t=============================================================================================================");
    printf("\n\t====================================== PLEASE ENTER TO CONTINOUS. ===========================================");
    printf("\n\t=============================================================================================================\n");
    getch();
    system("cls");

    for(i=0;i<cop.n;i++){
        printf("\n\t=============================================================================================================");
        printf("\n\t====================================== ARE YOU READY PLAYER %d ===============================================",i+1);
        printf("\n\t=============================================================================================================\n");
            time (&start);
            for(j=0;j<10;j++){
                quiz=random(1);
                printf("\n\t\tQUIZ %d :: Number list : ",j+1);
                printf("%d %d %d %d\n",num.num4,num.num3,num.num2,num.num1);
                anwsyou=0;
              while(anwsyou!=24) {
                printf("\n\t\t\t  Answer you : ");
                scanf("%s",anws);
                len = strlen(anws);

    if(len==7){ //no bracket
        res[0]=(int)anws[0]-48;
        res[1]=(int)anws[2]-48;
        res[2]=(int)anws[4]-48;
        res[3]=(int)anws[6]-48;

        oper.op1=anws[1];
        oper.op2=anws[3];
        oper.op3=anws[5];

        c=tester(res);

        if(c==4){
            anwsyou=format1(res,oper);
        }
        else{
            anwsyou=0;
        }

    }

    else{ //have 2 bracket
        if(len==11){
            if((anws[0]=='(')&&(anws[4]==')')&&(anws[6]=='(')&&(anws[10]==')')){ //(x+x)+(x+x)
                res[0]=(int)anws[1]-48;
                res[1]=(int)anws[3]-48;
                res[2]=(int)anws[7]-48;
                res[3]=(int)anws[9]-48;

                oper.op1=anws[2];
                oper.op2=anws[8];
                oper.op3=anws[5];

                c=tester(res);

                if(c==4){
                    anwsyou=format2(res,oper);
                }
                else{
                    anwsyou=0;
                }
            }

            else if((anws[0]=='(')&&(anws[8]==')')&&(anws[1]=='(')&&(anws[5]==')')){ // ((x+x)+x)+x
                res[0]=(int)anws[2]-48;
                res[1]=(int)anws[4]-48;
                res[2]=(int)anws[7]-48;
                res[3]=(int)anws[10]-48;

                oper.op1=anws[3];
                oper.op2=anws[6];
                oper.op3=anws[9];

                c=tester(res);

                if(c==4){
                    anwsyou=format1(res,oper);
                }
                else{
                    anwsyou=0;
                }
            }

            else if((anws[3]=='(')&&(anws[7]==')')&&(anws[2]=='(')&&(anws[10]==')')){ // x+((x+x)+x)
                res[0]=(int)anws[4]-48;
                res[1]=(int)anws[6]-48;
                res[2]=(int)anws[9]-48;
                res[3]=(int)anws[0]-48;

                oper.op1=anws[5];
                oper.op2=anws[8];
                oper.op3=anws[1];

                c=tester(res);

                if(c==4){
                    anwsyou=format3(res,oper);
                }
                else{
                    anwsyou=0;
                }
            }

            else if((anws[0]=='(')&&(anws[8]==')')&&(anws[3]=='(')&&(anws[7]==')')){ // (x+(x+x))+x
                res[0]=(int)anws[4]-48;
                res[1]=(int)anws[6]-48;
                res[2]=(int)anws[1]-48;
                res[3]=(int)anws[10]-48;

                oper.op1=anws[5];
                oper.op2=anws[2];
                oper.op3=anws[9];

                c=tester(res);

                if(c==4){
                    anwsyou=format5(res,oper);
                }
                else{
                    anwsyou=0;
                }
            }

            else if((anws[5]=='(')&&(anws[9]==')')&&(anws[2]=='(')&&(anws[10]==')')){ // x+(x+(x+x))
                res[0]=(int)anws[6]-48;
                res[1]=(int)anws[8]-48;
                res[2]=(int)anws[3]-48;
                res[3]=(int)anws[0]-48;

                oper.op1=anws[7];
                oper.op2=anws[4];
                oper.op3=anws[1];

                c=tester(res);

                if(c==4){
                    anwsyou=format4(res,oper);

                }
                else{
                    anwsyou=0;
                }
            }
        }

    //-------------------------------------------------------------------------------------------------------------//

        else if(len=9){ // have 1 bracket
            if((anws[0]=='(')&&(anws[4]==')')){ //(x+x)+x+x
                    res[0]=(int)anws[1]-48;
                    res[1]=(int)anws[3]-48;
                    res[2]=(int)anws[6]-48;
                    res[3]=(int)anws[8]-48;

                    oper.op1=anws[2];
                    oper.op2=anws[5];
                    oper.op3=anws[7];

                    c=tester(res);

                    if(c==4){
                        anwsyou=format1(res,oper);
                    }
                    else{
                        anwsyou=0;
                    }
                }

            else if((anws[2]=='(')&&(anws[6]==')')){ //x+(x+x)+x
                    res[0]=(int)anws[3]-48;
                    res[1]=(int)anws[5]-48;
                    res[2]=(int)anws[0]-48;
                    res[3]=(int)anws[8]-48;

                    oper.op1=anws[4];
                    oper.op2=anws[1];
                    oper.op3=anws[7];

                    c=tester(res);

                    if(c==4){
                        anwsyou=format5(res,oper);
                    }
                    else{
                        anwsyou=0;
                    }
                }
            else if((anws[4]=='(')&&(anws[8]==')')){    //x+x+(x+x)
                    res[0]=(int)anws[0]-48;
                    res[1]=(int)anws[2]-48;
                    res[2]=(int)anws[5]-48;
                    res[3]=(int)anws[7]-48;

                    oper.op1=anws[1];
                    oper.op2=anws[6];
                    oper.op3=anws[3];

                    c=tester(res);

                    if(c==4){
                        anwsyou=format2(res,oper);
                    }
                    else{
                        anwsyou=0;
                    }
                }
            }
        }
        //-------------------------------------------------------------------------------------------------------------//
    }
    if(anwsyou==24){
        printf("\n\t\t\t  CONGATULATION !!\n");
        printf("\n\t=============================================================================================================\n");
    }

}
    time (&end);
    dif = difftime (end,start);
    id[i].timer=dif/60;
    getch();
    system("cls");
}
sort(cop.n);
}
