<template>
  <div class="container">
    <!--<div class="row">
      <h2>This is shop page.</h2>
      <p>
        <router-link :to="{ name: 'shopdetail', params: { id: '1' } }">
          Item One
        </router-link>
      </p>
      <p>
        <router-link :to="{ name: 'shopdetail', params: { id: '2' } }">
          Item Two
        </router-link>
      </p>
    </div>-->
    <div class="row" v-if="products.length > 0">
      <div class="col-lg-3 col-md-4 col-sm-6 col-12" v-for="(product, index) in products" v-bind:key="index">
          <SingleItem :product="product" parent="Shop"></SingleItem>
      </div>
    </div>
  </div>
</template>
<script>
import SingleItem from '@/components/SingleItem.vue';
const axios = require('axios').default;
export default {
    name: "ShopView",
    data() {
        return {
            products: [],
        };
    },
    mounted() {
        this.getAllProducts();
    },
    methods: {
        getAllProducts() {
            axios.get("https://fakestoreapi.com/products")
                .then(response => {
                //console.log(response.data)
                this.products = response.data;
            });
        }
    },
    components: {
       SingleItem 
    }
  }
</script>