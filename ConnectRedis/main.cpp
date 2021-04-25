#include <iostream>
#include <hiredis/hiredis.h>
#include "RedisTools.h"
using namespace std;
int main()
{
    redisContext *c = redisConnect("127.0.0.1",6379);
    if(c->err){
       redisFree(c);
       cout<<"connect to redis fail"<<endl;
       return 1;
    }
    cout<<"connect to redis success"<<endl;
    redisReply *r = (redisReply*)redisCommand(c,"get name");
    cout<<r->str<<endl;
    redisFree(c);

    return 0;
}
