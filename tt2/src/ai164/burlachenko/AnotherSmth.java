package ai164.burlachenko;

import sun.reflect.generics.reflectiveObjects.NotImplementedException;

import java.util.HashMap;
import java.util.Map;

public class AnotherSmth implements Second<Integer,Integer> {

    Map<Integer, Integer> map = new HashMap<>();

    @Override
    public void addMap(Integer key, Integer value) {

    }

    @Override
    public Integer showListOfMap() {
        return null;
    }

    @Override
    public Object listofValues() {
        return null;
    }

    @Override
    public Object addsmt(Object obj) {
        return null;
    }
}
