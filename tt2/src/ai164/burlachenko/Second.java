package ai164.burlachenko;

import java.util.Map;

public interface Second<T,V> extends First {

    void addMap(T key, V value);

    T showListOfMap();
}
