#include <gtest/gtest.h>
#include <string>

#include "../src/fedex.h"

namespace
{
     // Tests para gets
    TEST(FedexTests, Fedex_getDistancia_Test) {
        Fedex envio_fedex{8,17};
        int actual = envio_fedex.getDistancia();
        EXPECT_EQ(17, actual);
    }

    TEST(FedexTests, Fedex_getPeso_Test) {
        Fedex envio_fedex{8,17};
        int actual = envio_fedex.getPeso();
        EXPECT_EQ(8, actual);
    }

    // Distancia < 500km y peso < 4kg
    TEST(FedexTests, Fedex_2kg_100km_Test)
    {
        Fedex envio_fedex{2, 100};
        float actual = envio_fedex.CalculoEnvio();
        EXPECT_FLOAT_EQ(20, actual);
    }

    // Distancia > 500km y peso > 4kg
    TEST(FedexTests, Fedex_10kg_1000km_Test)
    {
        Fedex envio_fedex{10, 1000};
        float actual = envio_fedex.CalculoEnvio();
        EXPECT_FLOAT_EQ(28, actual);
    }

    // Distancia > 500km y peso < 4kg
    TEST(FedexTests, Fedex_3kg_1897km_Test)
    {
        Fedex envio_fedex{3, 1897};
        float actual = envio_fedex.CalculoEnvio();
        EXPECT_FLOAT_EQ(25, actual);
    }

    // Distancia < 500km y peso > 4kg
    TEST(FedexTests, Fedex_95kg_253km_Test)
    {
        Fedex envio_fedex{95, 253};
        float actual = envio_fedex.CalculoEnvio();
        EXPECT_FLOAT_EQ(23, actual);
    }

}