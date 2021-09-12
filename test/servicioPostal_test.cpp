#include <gtest/gtest.h>
#include <string>

#include "../src/servicioPostal.h"

namespace {
    // Tests para gets
    TEST(ServicioPostalTests, ServicioPostal_getDistancia_Test) {
        ServicioPostal envio_postal{8,17,"Tercera"};
        int actual = envio_postal.getDistancia();
        EXPECT_EQ(17, actual);
    }

    TEST(ServicioPostalTests, ServicioPostal_getPeso_Test) {
        ServicioPostal envio_postal{8,17,"Tercera"};
        int actual = envio_postal.getPeso();
        EXPECT_EQ(8, actual);
    }


    // Tests para la primera clase
    TEST(ServicioPostalTests, ServicioPostal_1era_1kg_10km_Test) {
        ServicioPostal envio_postal{1,10,"Primera"};
        float actual = envio_postal.CalculoEnvio();
        EXPECT_FLOAT_EQ(1.95, actual);
    }

    TEST(ServicioPostalTests, ServicioPostal_1era_7kg_22km_Test) {
        ServicioPostal envio_postal{7,22,"Primera"};
        float actual = envio_postal.CalculoEnvio();
        EXPECT_FLOAT_EQ(9.9, actual);
    }

    TEST(ServicioPostalTests, ServicioPostal_1era_25kg_8km_Test) {
        ServicioPostal envio_postal{25,8,"Primera"};
        float actual = envio_postal.CalculoEnvio();
        EXPECT_FLOAT_EQ(4, actual);
    }

    // Tests para la segunda clase
    TEST(ServicioPostalTests, ServicioPostal_2da_2kg_55km_Test) {
        ServicioPostal envio_postal{2,55,"Segunda"};
        float actual = envio_postal.CalculoEnvio();
        EXPECT_FLOAT_EQ(1.0725, actual);
    }

    TEST(ServicioPostalTests, ServicioPostal_2da_6kg_4km_Test) {
        ServicioPostal envio_postal{6,4,"Segunda"};
        float actual = envio_postal.CalculoEnvio();
        EXPECT_FLOAT_EQ(0.18, actual);
    }

    TEST(ServicioPostalTests, ServicioPostal_2da_33kg_78km_Test) {
        ServicioPostal envio_postal{33,78,"Segunda"};
        float actual = envio_postal.CalculoEnvio();
        EXPECT_FLOAT_EQ(3.9, actual);
    }

    // Tests para la tercera clase
    TEST(ServicioPostalTests, ServicioPostal_3era_3kg_47km_Test) {
        ServicioPostal envio_postal{3,47,"Tercera"};
        float actual = envio_postal.CalculoEnvio();
        EXPECT_FLOAT_EQ(0.705, actual);
    }

    TEST(ServicioPostalTests, ServicioPostal_3era_8kg_17km_Test) {
        ServicioPostal envio_postal{8,17,"Tercera"};
        float actual = envio_postal.CalculoEnvio();
        EXPECT_FLOAT_EQ(0.272, actual);
    }

    TEST(ServicioPostalTests, ServicioPostal_3era_86kg_99km_Test) {
        ServicioPostal envio_postal{86,99,"Tercera"};
        float actual = envio_postal.CalculoEnvio();
        EXPECT_FLOAT_EQ(1.683, actual);
    }

}