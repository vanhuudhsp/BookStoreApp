import React from 'react';
import {StyleSheet} from 'react-native';
import {Home} from './screens';
import {createStackNavigator} from '@react-navigation/stack';
import {NavigationContainer, DefaultTheme, StackActions} from '@react-navigation/native';
import {BookDetail} from "./screens";
import Tabs from './navigation/tabs';
const theme  = {
    ...DefaultTheme,
    color:{
        ...DefaultTheme.colors,
        border:"transparent",
    }
};

const Stack = createStackNavigator();

const App=()=>{
    return (
        <NavigationContainer theme={theme}
        >
            <Stack.Navigator
                screenOptions={{
                    headerShown: false,
                }}
                initialRouteName={'Home'}
            >
                <Stack.Screen name='Home' component={Tabs}/>
                <Stack.Screen name='BookDetail' component={BookDetail} options={{headerShown: false}}/>
            </Stack.Navigator>
        </NavigationContainer>
    )
}

export default App;