# 初始化 环境 
```
npm install -g ts-node
npm install -g typescript 
tsc --init 
```
# typescript 设置 
```
{
  "compilerOptions": {
    "target": "ES6",
    "module": "commonjs",
    "outDir": "./dist",      // 编译后的 js 文件输出到这里
    "rootDir": "./src",      // 源码目录 (可选，推荐)
    "sourceMap": true,       // 【核心】生成 .map 文件，用于断点映射
    "strict": true
  },
  "include": ["src/**/*"]
}
```

# 安装插件
```
Markdown All in One
Markdown Preview Enhanced
```

# 配置 settings.json (核心)
```
{
    // 打开 md 文件时自动打开预览
    "markdown.preview.openOnStartup": true,
    // 编辑器滚动时，预览窗口同步滚动
    "markdown.preview.scrollPreviewWithEditor": true,
    // 预览窗口滚动时，编辑器同步滚动
    "markdown.preview.scrollEditorWithPreview": true,
    // 自动保存（实现类似 Typora 的实时刷新体验）
    "files.autoSave": "onFocusChange"
}
```

# md 配置 
打开 VS Code 设置：按快捷键 Ctrl + , (Mac 用户按 Cmd + ,)。
在搜索框输入：markdown preview auto show。
找到 Markdown > Preview: Auto Show Preview To Side 选项，勾选它。

你可以直接将这些配置复制到你的 settings.json 文件中，一键完成设置：
```
{
    // 打开md文件时，自动在侧边显示预览
    "markdown.preview.autoShowPreviewToSide": true,
    
    // 编辑器滚动时，预览窗口同步滚动
    "markdown.preview.scrollPreviewWithEditor": true,
    
    // 预览窗口滚动时，编辑器同步滚动
    "markdown.preview.scrollEditorWithPreview": true,
    
    // 建议开启自动保存，让预览刷新更及时
    "files.autoSave": "onFocusChange"
}
```