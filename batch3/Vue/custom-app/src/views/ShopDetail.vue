<template>
  <div class="container">
    <h2>This is Shop Detail Page for Item {{ this.$route.params.id }}</h2>
    <div class="card mb-3">
      <div class="row g-0">
        <div class="col-md-4">
          <img :src="product.image" class="img-fluid rounded-start w-75 p-3" alt="">
        </div>
        <div class="col-md-8">
          <div class="card-body">
            <h5 class="card-title">$ {{product.price}}</h5>
            <p class="card-text">{{product.title}}</p>
            <p class="card-text"><small class="text-muted">Rating : 4.1</small></p>
          </div>
        </div>
      </div>
    </div>
  </div>
</template>
<script>
/*{{this.$route.params.id}}
            ||
            ||  Another way
           \   /
            \ /
             V

export default {
  name: 'ShopDetail',
  data () {
      return {
          //id
      }
  }
}*/
const axios = require('axios').default;
export default {
  name: 'ShopDetailView',
  data() {
    return {
      product: Object,
    }
  },
  mounted() {
    this.getSingleProduct()
  },
  methods: {
    getSingleProduct() {
      let id = this.$route.params.id;
      axios.get('https://fakestoreapi.com/products/' + id)
        .then(response => {
          //console.log(response.data)
          this.product = response.data;
        })
    }
  }
}
</script>

<style>
</style>