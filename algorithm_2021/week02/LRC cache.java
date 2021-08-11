class LRUCache {
    class Node {
        public int key;
        public int value;
    }
    private LinkedList<Node> list;
    private int capacity = 0;
    public LRUCache(int capacity) {
        this.capacity = capacity;
        list = new LinkedList<Node>();
    }
    
    public int get(int key) {
        // 不存在返回-1
        if (!list.contains(key)) {
            return -1;
        }

        // 存在就删除，然后从头部插入
        list.remove(key);
        Node node = new Node();
        node.key = key;
        node.value = list.get(key).value;
        list.addFirst(node);
        return node.value;
    }
    
    public void put(int key, int value) {
        // 存在，则更新值，删除原来的， 并插入头部
       if (list.contains(key)) {
            list.remove(key);
            Node node = new Node();
            node.key = key;
            node.value = value;
            list.addFirst(node);
        } else {
            // 不存在， 则插入数据
            Node node = new Node();
            node.key = key;
            node.value = value;
            list.addFirst(node);
        }

        // 超出大小，则删除最老的数据
        if (list.size() > capacity) {
            list.removeLast();
        }
    }
}