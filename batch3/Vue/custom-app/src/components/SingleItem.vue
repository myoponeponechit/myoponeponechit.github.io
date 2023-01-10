<template>
    <div class="card my-3">
        <img :src="product.image" class="card-img-top w-50 mx-auto p-3" alt="">
        <div class="card-body">
            <h5 class="card-title">$ {{ product.price }}</h5>
            <p class="card-text">{{ product.title }}</p>
            <p class="card-text"><small>Rating : {{ product.rating.rate}}</small></p>
            <div class="d-flex justify-content-between">
                <router-link :to="{ name: 'shopdetail', params: { id: product.id } }">
                    <button class="btn btn-success">View</button>
                </router-link>
                <router-link :to="{ name: 'shopdetail', params: { id: '1' } }">
                    <button class="btn btn-warning">AddToCart</button>
                </router-link>
                <button class="btn btn-danger" v-if="parent=='Shop'">Hello</button>
            </div>
        </div>
    </div>
</template>
<script>
export default {
  name: 'SingleItem',
  props:{
    product: Object,
    parent: String,
    //center: true,   :class="{ 'text-center' : center }"    :center="true"
  },
  data() {
    return {
      
    }
  },
}
</script>
<style>
</style>