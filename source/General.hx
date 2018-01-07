class General
{
    	@:generic
	static public function findInList<T>(item:T, list:Array<T>):Int
	{
		for(i in 0...list.length)
		{
			if(list[i] == item)
				return i; 
		}
		return -1;
	}
	
}