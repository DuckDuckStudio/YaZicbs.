//©Duck_studio 鸭鸭工作室 https://yazicbs.mysxl.cn
//暂未完成  详情请前往官网咨询，我们将在5个工作日之内回复您！
//代码语言：JS  备注语言：中文(简体)
//AD:「アヒルの走りクール」は間もなく新しいバージョンv 3を発表する。3.9、お楽しみに！
//購読するにはアヒルのスタジオの公式サイトに行ってください!
//此代码仅可在box3上运行
world.addCollisionFilter('player', 'player')//取消碰撞
//定义出生点
world.onPlayerJoin(({entity})=>{
    entity .position.set(3,10,14);//(x,y,z)
    entity.player.spawnPoint.copy(entity.position);
})
const gg = world.querySelector('#公告');
gg.enableInteract = true; // 允许进行互动
gg.interactRadius = 16;   // 实体的互动范围
gg.interactHint = gg.id; // 互动提示框显示实体的名称
gg.interactColor = new Box3RGBColor(1,0,1);  // 互动提示的文字颜色

// 玩家与实体进行交互时触发
gg.onInteract(async({entity}) => {
    const result = await entity.player.dialog({
        type: Box3DialogType.TEXT,   // 对话框的类型，TEXT是文本框。
        title: gg.id,               // 对话框标题为NPC名字，表示正在说话的是NPC
        lookEye: entity,             // 将相机放在玩家位置
        lookTarget: gg,             // 相机镜头对准NPC
        content: 
        `你好，${entity.player.name}，欢迎来到“冰雪大冒险(新年)”。
        模型and建筑：名侦探柯南
        代码：鸭鸭(B站@鸭子出版社)
        GitHub:DuckPublishingHouse
        Duck studio  (●'◡'●)
        yazicbs.mysxl.cn`,//TEXE的内容
    });
});
//关于彩蛋-----------------
/*const cd1 = world.querySelector('彩蛋entity名')
......*/
//测试—--------------------
world.onVoxelContact(({entity,voxel})=>{
    const block=voxels.id('C')
    if  (voxel===block){
        entity.player.directMessage('存档成功')
        entity.player.spawnPoint=new
        Box3Vector3(entity.position.x,entity.position.y,entity.position.z)//设置重生点
    }
})
world.onVoxelContact(({entity,voxel})=>{
    const block1=voxels.id('less_than')
    if  (voxel===block1){
        world.say(`${entity.player.name}开始跑酷了`)
        entity.player.zt = 1;
    }
})
//sldm----------------------------------
world.onPlayerJoin(async ({entity})=>{
  if (entity.isPlayer) {
    entity.hurt(entity.maxHp);
    entity.hp=0;
  }
});
//_____________________________________
world.onVoxelContact(({entity,voxel})=>{
    const block2=voxels.id('carpet_08')
    if  (voxel===block2 && (entity.player.zt) == 1){
        world.say(`${entity.player.name}通关啦~`)
        entity.player.attr = 0;
        entity.player.spawnPoint=new
        Box3Vector3(entity.position.x,entity.position.y,entity.position.z)//设置重生点
    }
})
//备用存档方式(需加模型)
/*world.querySelectorAll('.存档').forEach((e) => {
    e.onEntityContact(({ entity, other }) => {
        if (!other.isPlayer) return;
        other.player.spawnPoint.copy(entity.position);
        other.player.spawnPoint.y += 1.5;
        other.player.directMessage('系统提示：存档成功(说 复活 可以回到存档点）');
        other.player.canFly = false
    })
})*/
world.onVoxelContact(({entity,voxel})=>{
    const baock3 = voxels.id('最下层方块')//自己填
    if (voxel===block3) {
        if (entity.isPlayer){
            //可选
            //entity.hurt(entity.maxHp);//方案1
            entity.hp = 0;//方案2
        }
    }
})
