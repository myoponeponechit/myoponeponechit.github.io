<template>
    <div>
        <h2>Shop Page.</h2>
        <p><router-link :to="{ name: 'shopdetail', params: { id : '1' }}">Item One</router-link></p>
        <p><router-link :to="{ name: 'shopdetail', params: { id : '2' }}">Item Two</router-link></p>
        <PartFile></PartFile>
    </div>
</template>
<script>
// @ is an alias to /src
import PartFile from '@/components/PartFile.vue'

export default {
  name: 'ShopView',
  components: {
    PartFile,
  }
}
</script>