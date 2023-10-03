var express=require('express');
var app=express();
app.use(express.static('public'))
app.get('/index',(req,res)=>{
res.sendFile("index.html")
})
app.get('/contact',(req,res)=>{
res.sendFile("contact.html")
})
app.get('/about',(req,res)=>{
res.sendFile("about.html")
})
app.get('/service',(req,res)=>{
res.sendFile("service.html")
})
app.listen(8000,()=>{
console.log("App is listening on port 8000") 
})
