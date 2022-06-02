const app = Vue.createApp ({
    data() {
        return {
            id: 1,
            name: "Myo Pone Pone Chit",
            age: 22,
            profile: "img/profile.png",
            para:'<span style="color:red;">This is text.</span>',
            seen: true,
            mark: 30,
            students: [
                {name:"mg mg",age:15,gender:"male"},
                {name:"su su",age:20,gender:"female"},
                {name:"ko ko",age:22,gender:"male"},
            ],
            username:"",
            money:150.12345,
        }
    },

    methods:{
        reverse() {
            this.name = this.name.split('').reverse().join('')
        },
    },
    
    computed:{
        girls() {
            return this.students.filter(row => row.gender == "female")
        },
        boys() {
            return this.students.filter(row => row.gender == "male")
        },
    },

    filters:{
        currencydecimal (value) {
            return value.toFixed(2)
        }
    }
})