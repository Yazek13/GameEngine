#include <iostream>
#include <memory>

#include <SimpleEngineCore/Application.hpp>

using namespace std;

class MyApp : public SimpleEngine::Application
{
    virtual void on_update() override
    {
       // cout << "Update frame: " << frame++ << endl;
    }

    int frame = 0;
};


int main()
{
    auto myApp = make_unique<MyApp>();

    int returnCode = myApp->start(1024, 768, "My first App");

    cin.get();

    return returnCode;
}