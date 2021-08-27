# YaZicbs.'s Echo hole
//©YaZicbs.|yaya &amp; YaZicbs  
//本代码仅可在 https://box3.codemao.cn/ 上运行。  
//This code can only be used in https://box3.codemao.cn/  Run on.  
//代码中的/均为~  
// / in the code are~  
//————————————回声洞————————————  
var HSD;  
function mathRandomInt(a, b) {  
    if (a > b) {  
        // Swap a and b to ensure a is smaller.  
        var c = a;  
        a = b;  
        b = c;  
    }  
    return Math.floor(Math.random() * (b - a + 1) + a);  
}  
world.onPlayerJoin(async ({entity})=>{  
    while (true) {  
        await sleep(20000);  
        HSD = mathRandomInt(1, 49);  
        world.say('-----回声洞-----');  
        if (HSD == 1) {  
            world.say('作业补完了吗？');  
        } else if (HSD == 2) {  
            world.say('各位同学们，作业写完了吗？');  
        } else if (HSD == 3) {  
            world.say('小丑竟是你自己！');  
        } else if (HSD == 4) {  
            world.say('！读着倒要话候时有');  
        } else if (HSD == 5) {  
            world.say('17张牌你能秒我？');  
        } else if (HSD == 6) {  
            world.say('SCP基金会已介入调查！');  
        } else if (HSD == 7) {  
            world.say('果断就会白给。');  
        } else if (HSD == 8) {  
            world.say('迫害群友需谨慎，不然夹子就离你不远了awa');  
        } else if (HSD == 9) {  
            world.say('别杀怪物，你个海豚！');  
        } else if (HSD == 10) {  
            world.say('咯咯咯—— 翻译：鸽，下次也不一定。');  
        } else if (HSD == 11) {  
            world.say('AMD YES!');  
        } else if (HSD == 12) {  
            world.say('获得成就：别人的世界！');  
        } else if (HSD == 13) {  
            world.say('我这里有负荆请罪IV、弹射物吸引V、经验腐蚀的钻石甲，要吗？（');  
        } else if (HSD == 14) {  
            world.say('秒了，有什么好说的。');  
        } else if (HSD == 15) {  
            world.say('兽人永不为奴！（除非包吃包住）');  
        } else if (HSD == 16) {  
            world.say('投稿回声洞的人数为n，你看到这条的概率是n分之一，所以能看到这条的都是欧皇！');  
        } else if (HSD == 17) {  
            world.say('这交易不错！');  
        } else if (HSD == 18) {  
            world.say('下周不嘎了，真的吗……');  
        } else if (HSD == 19) {  
            world.say('喵呜/你好可爱/');  
        } else if (HSD == 20) {  
            world.say('开学愉快！');  
        } else if (HSD == 21) {  
            world.say('初始之音，响彻未来！');  
        } else if (HSD == 22) {  
            world.say('今天是多么美好的一天啊。小鸟在歌唱，花朵在绽放。在这样的一天里，像你这样的孩子……应当被鸭鸭夹起来扔垃圾桶里');  
        } else if (HSD == 23) {  
            world.say('人被逼急了啥都能做出来，除了数学题！')  
        } else if (HSD == 24) {  
            world.say('哇/金色传说！')  
        } else if (HSD == 25) {  
            world.say('精 神 小 伙')  
        } else if (HSD == 26) {  
            world.say('中国联通提醒您：警惕移动电信诈骗！')  
        } else if (HSD == 27) {  
            world.say('反馈Bug前……先想一想这是不是特性！')  
        } else if (HSD == 28) {  
            world.say('阿 Sir，不会吧？')  
        } else if (HSD == 29) {  
            world.say('不懂就问，我要问什么？')  
        } else if (HSD == 30) {  
            world.say('问君能有几多愁？恰似一缸鸭鸭向东流。')  
        } else if (HSD == 31) {  
            world.say('小伙纸，你不讲武德！')  
        } else if (HSD == 32) {  
            world.say('希望人有事,jpg')  
        } else if (HSD == 33) {  
            world.say('淦翻粉皮怪！')  
        } else if (HSD == 34) {  
            world.say('爷爷，你关注的鸭鸭终于更新啦/')  
        } else if (HSD == 35) {  
            world.say('小问号，你是否有很多朋友？')  
        } else if (HSD == 36) {  
            world.say('你没有看见什么留言，这里只有几根鸭子留下的羽毛。')  
        } else if (HSD == 37) {  
            world.say('你不是挂怎么和我们打！')  
        } else if (HSD == 38) {  
            world.say('日常踩雷！')  
        } else if (HSD == 39) {  
            world.say('芜湖，起飞！')  
        } else if (HSD == 40) {  
            world.say('越过屏障！')  
        } else if (HSD == 41) {  
            world.say('比钻石更坚强！')  
        } else if (HSD == 42) {  
            world.say('见鬼去吧！')  
        } else if (HSD == 43) {  
            world.say('红烧鸡翅我最爱吃！')  
        } else if (HSD == 44) {  
            world.say('这是回声洞，你可以在这里看到鸭鸭小镇创作团队以及各位沙雕网友乱七八糟的留言！')  
        } else if (HSD == 45) {  
            world.say('您，人？神！砰砰砰！')  
        } else if (HSD == 46) {  
            world.say('鸭鸭：太复杂了，不修了，这是特性，特性！')  
        } else if (HSD == 47) {  
            world.say('按Alt+F4有惊喜！')  
        } else if (HSD == 48) {  
            world.say('鸭子观察日记！')  
        } else if (HSD == 49) {  
            world.say('回声~回声~回声~')  
        } else if (HSD == 50) {  
            world.say('网址就是来路！')  
        } else if {  
            world.say('现在玩的嗨，待会被夹更嗨！')  
        } else {  
            world.say("error:HSD is no't in 1~49")  
        }  
    }  
});  
//今日人品  
world.onChat(async ({entity,message})=>{  
    if(entity){  
        if (entity.isPlayer) {  
           if (message == '今日人品') {  
               if ((entity.player.JRRP2) != 1) {   
                   entity.player.JRRP2=1;  
                   entity.player.JRRP=(mathRandomInt(0, 100));  
                   if ((entity.player.JRRP) <= 10) {  
                       entity.player.directMessage(['你今天的人品值是',(entity.player.JRRP),'……（没错，是百分制）'].join(''));  
                   } else if ((entity.player.JRRP) <= 30) {  
                       entity.player.directMessage(['你今天的人品值是',(entity.player.JRRP),'……'].join(''));  
                   } else if ((entity.player.JRRP) <= 60) {  
                       entity.player.directMessage(['你今天的人品值是',(entity.player.JRRP),'……还可以'].join(''));  
                   } else if ((entity.player.JRRP) <= 100) {  
                       entity.player.directMessage(['你今天的人品值是',(entity.player.JRRP),'！是不错的一天呢！'].join(''));  
                   }  
               } else {  
                   if ((entity.player.JRRP) <= 10) {  
                       entity.player.directMessage(['你今天的人品值是',(entity.player.JRRP),'……（没错，是百分制）'].join(''));  
                   } else if ((entity.player.JRRP) <= 30) {  
                       entity.player.directMessage(['你今天的人品值是',(entity.player.JRRP),'呜哇……'].join(''));  
                   } else if ((entity.player.JRRP) <= 60) {  
                       entity.player.directMessage(['你今天的人品值是',(entity.player.JRRP),'……还可以'].join(''));  
                   } else if ((entity.player.JRRP) <= 100) {  
                       entity.player.directMessage(['你今天的人品值是',(entity.player.JRRP),'！是不错的一天呢！'].join(''));  
                   }  
               }  
           }  
       }  
   }  
});  
//——————今日人品刷新  
world.onPlayerJoin(async ({entity})=>{  
    if((new Date().getHours()+8) >= 23 || (new Date().getHours()+8) <= 0){  
       entity.player.JRRP2=0;  
    }  
})  
