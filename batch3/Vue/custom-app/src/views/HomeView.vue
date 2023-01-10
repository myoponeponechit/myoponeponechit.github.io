<template>
  <div class="home">
    <img alt="Vue logo" src="../assets/logo.png">
    <HelloWorld msg="Welcome to Your Vue.js Ecommerce App" />
  </div>
  <div class="container" v-if="products.length > 0">
    <div class="row row-cols-1 row-cols-sm-2 row-cols-md-5">
      <div class="col" v-for="(product, index) in products" v-bind:key="index">
        <SingleItem :product="product"></SingleItem>
      </div>
    </div>
  </div>
</template>

<script>
// @ is an alias to /src
import HelloWorld from '@/components/HelloWorld.vue'
import SingleItem from '@/components/SingleItem.vue'
const axios = require('axios').default;

export default {
  name: 'HomeView',
  components: {
    HelloWorld,
    SingleItem
  },
  data() {
    return {
      products: [],
    }
  },
  mounted() {
    this.getLimitProducts()
  },
  methods: {
    getLimitProducts() {
      axios.get('https://fakestoreapi.com/products?limit=5')
        .then(response => {
          //console.log(response.data)
          this.products = response.data;
        })
    }
  }
}
</script>

<style>
.home {
  text-align: center;
}
</style>