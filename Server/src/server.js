const express = require('express')
const app = express()
const port = 3000
app.use(express.json())

app.get('/', (req, res) => {
  res.send({
    message: 'Hello World!',
    from: 'Not-Agar.io'
  })
})

app.post('/', (req, res) => {
  console.log(req.body)

  res.send({
    message: "Post recieved"
  })
})


app.listen(port, () => {
  console.log(`Example app listening at http://localhost:${port}`)
})