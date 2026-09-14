/* ============================================================================
   AUTO-GENERATED RANDOM FOREST INFERENCE ENGINE
   Copy and paste this block into your Run_RandomForest_Inference() function
============================================================================ */

    uint16_t arc_fault_votes = 0;

    // ----------------------------------------
    // TREE 1
    // ----------------------------------------
        if (feat_array[0] <= 0.146948f) {
            if (feat_array[1] <= 0.167381f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[2] <= 0.426406f) {
                if (feat_array[2] <= 0.411301f) {
                    arc_fault_votes += 1;
                } else {
                    if (feat_array[2] <= 0.411751f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        if (feat_array[0] <= 0.174839f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 2
    // ----------------------------------------
        if (feat_array[2] <= 0.426691f) {
            if (feat_array[2] <= 0.298570f) {
                if (feat_array[2] <= 0.199782f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[2] <= 0.202241f) {
                        if (feat_array[1] <= 0.130501f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[0] <= 0.126027f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                }
            } else {
                if (feat_array[2] <= 0.377194f) {
                    if (feat_array[2] <= 0.325853f) {
                        if (feat_array[2] <= 0.300290f) {
                            if (feat_array[1] <= 0.156283f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        } else {
                            if (feat_array[0] <= 0.126832f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        }
                    } else {
                        if (feat_array[0] <= 0.143199f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                } else {
                    if (feat_array[0] <= 0.158273f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            }
        } else {
            if (feat_array[0] <= 0.174088f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 3
    // ----------------------------------------
        if (feat_array[1] <= 0.166988f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 4
    // ----------------------------------------
        if (feat_array[2] <= 0.426570f) {
            if (feat_array[1] <= 0.167381f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[0] <= 0.173813f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 5
    // ----------------------------------------
        if (feat_array[2] <= 0.423650f) {
            if (feat_array[1] <= 0.167332f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[0] <= 0.173813f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 6
    // ----------------------------------------
        if (feat_array[1] <= 0.168159f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 7
    // ----------------------------------------
        if (feat_array[1] <= 0.167332f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 8
    // ----------------------------------------
        if (feat_array[0] <= 0.146948f) {
            if (feat_array[1] <= 0.166733f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[2] <= 0.423133f) {
                if (feat_array[1] <= 0.153164f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 9
    // ----------------------------------------
        if (feat_array[2] <= 0.426691f) {
            if (feat_array[1] <= 0.167635f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[0] <= 0.173131f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 10
    // ----------------------------------------
        if (feat_array[0] <= 0.148302f) {
            if (feat_array[1] <= 0.167381f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 11
    // ----------------------------------------
        if (feat_array[0] <= 0.148852f) {
            if (feat_array[2] <= 0.201886f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                if (feat_array[0] <= 0.141357f) {
                    if (feat_array[2] <= 0.202248f) {
                        arc_fault_votes += 1;
                    } else {
                        if (feat_array[2] <= 0.214971f) {
                            if (feat_array[1] <= 0.140436f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        } else {
                            if (feat_array[1] <= 0.177674f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        }
                    }
                } else {
                    if (feat_array[2] <= 0.356966f) {
                        arc_fault_votes += 1;
                    } else {
                        // arc_fault_votes += 0; (Normal Vote)
                    }
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 12
    // ----------------------------------------
        if (feat_array[2] <= 0.419314f) {
            if (feat_array[1] <= 0.168110f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[0] <= 0.172911f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 13
    // ----------------------------------------
        if (feat_array[2] <= 0.426691f) {
            if (feat_array[0] <= 0.144389f) {
                if (feat_array[0] <= 0.140192f) {
                    if (feat_array[1] <= 0.167381f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[1] <= 0.156162f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            } else {
                if (feat_array[1] <= 0.155482f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            if (feat_array[1] <= 0.187551f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 14
    // ----------------------------------------
        if (feat_array[2] <= 0.426691f) {
            if (feat_array[0] <= 0.148414f) {
                if (feat_array[1] <= 0.168110f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[0] <= 0.173082f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 15
    // ----------------------------------------
        if (feat_array[1] <= 0.167332f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 16
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 17
    // ----------------------------------------
        if (feat_array[0] <= 0.145763f) {
            if (feat_array[2] <= 0.199986f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                if (feat_array[2] <= 0.211738f) {
                    if (feat_array[2] <= 0.211322f) {
                        if (feat_array[1] <= 0.131131f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[2] <= 0.298749f) {
                        if (feat_array[1] <= 0.157502f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[1] <= 0.178574f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                }
            }
        } else {
            if (feat_array[0] <= 0.148265f) {
                if (feat_array[0] <= 0.147483f) {
                    if (feat_array[2] <= 0.359462f) {
                        arc_fault_votes += 1;
                    } else {
                        // arc_fault_votes += 0; (Normal Vote)
                    }
                } else {
                    // arc_fault_votes += 0; (Normal Vote)
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 18
    // ----------------------------------------
        if (feat_array[0] <= 0.148414f) {
            if (feat_array[1] <= 0.167635f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 19
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 20
    // ----------------------------------------
        if (feat_array[2] <= 0.426437f) {
            if (feat_array[2] <= 0.261088f) {
                if (feat_array[1] <= 0.148178f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                if (feat_array[0] <= 0.144927f) {
                    if (feat_array[1] <= 0.174258f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[2] <= 0.395340f) {
                        arc_fault_votes += 1;
                    } else {
                        if (feat_array[1] <= 0.180193f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                }
            }
        } else {
            if (feat_array[2] <= 0.437567f) {
                if (feat_array[1] <= 0.187551f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 21
    // ----------------------------------------
        if (feat_array[1] <= 0.167635f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 22
    // ----------------------------------------
        if (feat_array[0] <= 0.148414f) {
            if (feat_array[0] <= 0.140840f) {
                if (feat_array[0] <= 0.126571f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[1] <= 0.152779f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            } else {
                if (feat_array[2] <= 0.356341f) {
                    arc_fault_votes += 1;
                } else {
                    // arc_fault_votes += 0; (Normal Vote)
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 23
    // ----------------------------------------
        if (feat_array[1] <= 0.168524f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 24
    // ----------------------------------------
        if (feat_array[1] <= 0.167332f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 25
    // ----------------------------------------
        if (feat_array[1] <= 0.168159f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 26
    // ----------------------------------------
        if (feat_array[0] <= 0.147080f) {
            if (feat_array[1] <= 0.167381f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[2] <= 0.430010f) {
                if (feat_array[0] <= 0.148302f) {
                    if (feat_array[0] <= 0.147310f) {
                        arc_fault_votes += 1;
                    } else {
                        if (feat_array[0] <= 0.147446f) {
                            if (feat_array[0] <= 0.147359f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        } else {
                            // arc_fault_votes += 0; (Normal Vote)
                        }
                    }
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 27
    // ----------------------------------------
        if (feat_array[2] <= 0.426691f) {
            if (feat_array[1] <= 0.167381f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[2] <= 0.437384f) {
                if (feat_array[0] <= 0.175920f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 28
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 29
    // ----------------------------------------
        if (feat_array[0] <= 0.146948f) {
            if (feat_array[2] <= 0.199414f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                if (feat_array[2] <= 0.202248f) {
                    if (feat_array[0] <= 0.096884f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[2] <= 0.315213f) {
                        if (feat_array[2] <= 0.314975f) {
                            if (feat_array[1] <= 0.168100f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[1] <= 0.188871f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                }
            }
        } else {
            if (feat_array[2] <= 0.426406f) {
                if (feat_array[2] <= 0.425982f) {
                    if (feat_array[1] <= 0.155569f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    // arc_fault_votes += 0; (Normal Vote)
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 30
    // ----------------------------------------
        if (feat_array[1] <= 0.166725f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 31
    // ----------------------------------------
        if (feat_array[1] <= 0.167332f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 32
    // ----------------------------------------
        if (feat_array[2] <= 0.420789f) {
            if (feat_array[1] <= 0.167381f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[2] <= 0.437661f) {
                if (feat_array[2] <= 0.426691f) {
                    if (feat_array[1] <= 0.193279f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[2] <= 0.435142f) {
                        if (feat_array[2] <= 0.432019f) {
                            if (feat_array[1] <= 0.186674f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[2] <= 0.435242f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            if (feat_array[2] <= 0.437172f) {
                                if (feat_array[0] <= 0.176561f) {
                                    // arc_fault_votes += 0; (Normal Vote)
                                } else {
                                    arc_fault_votes += 1;
                                }
                            } else {
                                // arc_fault_votes += 0; (Normal Vote)
                            }
                        }
                    }
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 33
    // ----------------------------------------
        if (feat_array[0] <= 0.146744f) {
            if (feat_array[2] <= 0.199782f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                if (feat_array[2] <= 0.202248f) {
                    if (feat_array[0] <= 0.096884f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[2] <= 0.300022f) {
                        if (feat_array[2] <= 0.299885f) {
                            if (feat_array[0] <= 0.128781f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[0] <= 0.145763f) {
                            if (feat_array[0] <= 0.145137f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                if (feat_array[2] <= 0.352921f) {
                                    arc_fault_votes += 1;
                                } else {
                                    // arc_fault_votes += 0; (Normal Vote)
                                }
                            }
                        } else {
                            if (feat_array[0] <= 0.145822f) {
                                arc_fault_votes += 1;
                            } else {
                                // arc_fault_votes += 0; (Normal Vote)
                            }
                        }
                    }
                }
            }
        } else {
            if (feat_array[1] <= 0.153784f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 34
    // ----------------------------------------
        if (feat_array[0] <= 0.148784f) {
            if (feat_array[1] <= 0.167635f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 35
    // ----------------------------------------
        if (feat_array[2] <= 0.426437f) {
            if (feat_array[1] <= 0.167332f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[0] <= 0.173813f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 36
    // ----------------------------------------
        if (feat_array[0] <= 0.148784f) {
            if (feat_array[0] <= 0.140835f) {
                if (feat_array[1] <= 0.167635f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                if (feat_array[1] <= 0.156884f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 37
    // ----------------------------------------
        if (feat_array[0] <= 0.146744f) {
            if (feat_array[0] <= 0.141058f) {
                if (feat_array[2] <= 0.199676f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[1] <= 0.167381f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            } else {
                if (feat_array[1] <= 0.156860f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            if (feat_array[2] <= 0.430010f) {
                if (feat_array[2] <= 0.429725f) {
                    if (feat_array[0] <= 0.148784f) {
                        if (feat_array[0] <= 0.147516f) {
                            if (feat_array[0] <= 0.147398f) {
                                if (feat_array[1] <= 0.157212f) {
                                    // arc_fault_votes += 0; (Normal Vote)
                                } else {
                                    arc_fault_votes += 1;
                                }
                            } else {
                                if (feat_array[0] <= 0.147435f) {
                                    // arc_fault_votes += 0; (Normal Vote)
                                } else {
                                    arc_fault_votes += 1;
                                }
                            }
                        } else {
                            // arc_fault_votes += 0; (Normal Vote)
                        }
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    // arc_fault_votes += 0; (Normal Vote)
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 38
    // ----------------------------------------
        if (feat_array[1] <= 0.166725f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 39
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 40
    // ----------------------------------------
        if (feat_array[1] <= 0.165552f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 41
    // ----------------------------------------
        if (feat_array[0] <= 0.148414f) {
            if (feat_array[0] <= 0.141299f) {
                if (feat_array[1] <= 0.166725f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                if (feat_array[1] <= 0.156401f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 42
    // ----------------------------------------
        if (feat_array[2] <= 0.426403f) {
            if (feat_array[2] <= 0.299885f) {
                if (feat_array[2] <= 0.199676f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[2] <= 0.202336f) {
                        if (feat_array[2] <= 0.201886f) {
                            if (feat_array[2] <= 0.201133f) {
                                arc_fault_votes += 1;
                            } else {
                                // arc_fault_votes += 0; (Normal Vote)
                            }
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[0] <= 0.126027f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                }
            } else {
                if (feat_array[2] <= 0.364669f) {
                    if (feat_array[1] <= 0.179506f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[2] <= 0.410649f) {
                        if (feat_array[2] <= 0.381096f) {
                            if (feat_array[2] <= 0.380934f) {
                                if (feat_array[0] <= 0.154620f) {
                                    // arc_fault_votes += 0; (Normal Vote)
                                } else {
                                    arc_fault_votes += 1;
                                }
                            } else {
                                arc_fault_votes += 1;
                            }
                        } else {
                            if (feat_array[0] <= 0.157057f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        }
                    } else {
                        if (feat_array[2] <= 0.412389f) {
                            if (feat_array[1] <= 0.192069f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        } else {
                            if (feat_array[2] <= 0.419519f) {
                                if (feat_array[1] <= 0.189173f) {
                                    // arc_fault_votes += 0; (Normal Vote)
                                } else {
                                    arc_fault_votes += 1;
                                }
                            } else {
                                if (feat_array[0] <= 0.177476f) {
                                    // arc_fault_votes += 0; (Normal Vote)
                                } else {
                                    arc_fault_votes += 1;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (feat_array[0] <= 0.173813f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 43
    // ----------------------------------------
        if (feat_array[0] <= 0.148414f) {
            if (feat_array[2] <= 0.199782f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                if (feat_array[1] <= 0.167635f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            if (feat_array[2] <= 0.411028f) {
                if (feat_array[1] <= 0.151691f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 44
    // ----------------------------------------
        if (feat_array[2] <= 0.419264f) {
            if (feat_array[1] <= 0.167381f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[1] <= 0.187551f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 45
    // ----------------------------------------
        if (feat_array[2] <= 0.426437f) {
            if (feat_array[0] <= 0.145761f) {
                if (feat_array[1] <= 0.168159f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                if (feat_array[0] <= 0.148784f) {
                    if (feat_array[1] <= 0.154013f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            if (feat_array[1] <= 0.193396f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 46
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 47
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 48
    // ----------------------------------------
        if (feat_array[0] <= 0.148414f) {
            if (feat_array[0] <= 0.141057f) {
                if (feat_array[0] <= 0.125939f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[2] <= 0.307877f) {
                        arc_fault_votes += 1;
                    } else {
                        // arc_fault_votes += 0; (Normal Vote)
                    }
                }
            } else {
                if (feat_array[2] <= 0.357025f) {
                    arc_fault_votes += 1;
                } else {
                    // arc_fault_votes += 0; (Normal Vote)
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 49
    // ----------------------------------------
        if (feat_array[2] <= 0.426437f) {
            if (feat_array[0] <= 0.148414f) {
                if (feat_array[0] <= 0.140842f) {
                    if (feat_array[2] <= 0.211322f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        if (feat_array[0] <= 0.139392f) {
                            if (feat_array[0] <= 0.135578f) {
                                if (feat_array[2] <= 0.214971f) {
                                    if (feat_array[1] <= 0.140436f) {
                                        // arc_fault_votes += 0; (Normal Vote)
                                    } else {
                                        arc_fault_votes += 1;
                                    }
                                } else {
                                    // arc_fault_votes += 0; (Normal Vote)
                                }
                            } else {
                                if (feat_array[0] <= 0.135658f) {
                                    arc_fault_votes += 1;
                                } else {
                                    if (feat_array[0] <= 0.137261f) {
                                        if (feat_array[2] <= 0.291151f) {
                                            arc_fault_votes += 1;
                                        } else {
                                            // arc_fault_votes += 0; (Normal Vote)
                                        }
                                    } else {
                                        // arc_fault_votes += 0; (Normal Vote)
                                    }
                                }
                            }
                        } else {
                            if (feat_array[0] <= 0.139470f) {
                                arc_fault_votes += 1;
                            } else {
                                if (feat_array[2] <= 0.303515f) {
                                    arc_fault_votes += 1;
                                } else {
                                    // arc_fault_votes += 0; (Normal Vote)
                                }
                            }
                        }
                    }
                } else {
                    if (feat_array[0] <= 0.147478f) {
                        if (feat_array[0] <= 0.145897f) {
                            if (feat_array[2] <= 0.342295f) {
                                arc_fault_votes += 1;
                            } else {
                                // arc_fault_votes += 0; (Normal Vote)
                            }
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        // arc_fault_votes += 0; (Normal Vote)
                    }
                }
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[1] <= 0.193350f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 50
    // ----------------------------------------
        if (feat_array[2] <= 0.426358f) {
            if (feat_array[0] <= 0.148784f) {
                if (feat_array[2] <= 0.199782f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[0] <= 0.140842f) {
                        if (feat_array[1] <= 0.167635f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[2] <= 0.356409f) {
                            arc_fault_votes += 1;
                        } else {
                            // arc_fault_votes += 0; (Normal Vote)
                        }
                    }
                }
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[1] <= 0.187505f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 51
    // ----------------------------------------
        if (feat_array[1] <= 0.167586f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 52
    // ----------------------------------------
        if (feat_array[1] <= 0.166725f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 53
    // ----------------------------------------
        if (feat_array[0] <= 0.148784f) {
            if (feat_array[0] <= 0.142184f) {
                if (feat_array[2] <= 0.199986f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[1] <= 0.167332f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            } else {
                if (feat_array[1] <= 0.156447f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 54
    // ----------------------------------------
        if (feat_array[2] <= 0.426437f) {
            if (feat_array[0] <= 0.148265f) {
                if (feat_array[0] <= 0.141520f) {
                    if (feat_array[1] <= 0.167332f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[1] <= 0.155769f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[2] <= 0.437448f) {
                if (feat_array[2] <= 0.435158f) {
                    if (feat_array[1] <= 0.187104f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[0] <= 0.177221f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 55
    // ----------------------------------------
        if (feat_array[2] <= 0.426437f) {
            if (feat_array[1] <= 0.167635f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[0] <= 0.173131f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 56
    // ----------------------------------------
        if (feat_array[1] <= 0.167635f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 57
    // ----------------------------------------
        if (feat_array[0] <= 0.144679f) {
            if (feat_array[1] <= 0.166733f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[2] <= 0.437828f) {
                if (feat_array[2] <= 0.392106f) {
                    arc_fault_votes += 1;
                } else {
                    if (feat_array[1] <= 0.185677f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 58
    // ----------------------------------------
        if (feat_array[1] <= 0.167635f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 59
    // ----------------------------------------
        if (feat_array[0] <= 0.148784f) {
            if (feat_array[1] <= 0.167381f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 60
    // ----------------------------------------
        if (feat_array[1] <= 0.167635f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 61
    // ----------------------------------------
        if (feat_array[1] <= 0.167586f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 62
    // ----------------------------------------
        if (feat_array[0] <= 0.146217f) {
            if (feat_array[2] <= 0.199986f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                if (feat_array[0] <= 0.140938f) {
                    if (feat_array[1] <= 0.167381f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[0] <= 0.141605f) {
                        if (feat_array[1] <= 0.152445f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[0] <= 0.142184f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            if (feat_array[1] <= 0.156447f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        }
                    }
                }
            }
        } else {
            if (feat_array[1] <= 0.155215f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 63
    // ----------------------------------------
        if (feat_array[2] <= 0.426437f) {
            if (feat_array[1] <= 0.167381f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[2] <= 0.437567f) {
                if (feat_array[1] <= 0.187551f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 64
    // ----------------------------------------
        if (feat_array[2] <= 0.426691f) {
            if (feat_array[1] <= 0.167381f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[0] <= 0.173082f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 65
    // ----------------------------------------
        if (feat_array[0] <= 0.145947f) {
            if (feat_array[2] <= 0.199676f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                if (feat_array[0] <= 0.142679f) {
                    if (feat_array[2] <= 0.211738f) {
                        if (feat_array[2] <= 0.211233f) {
                            if (feat_array[2] <= 0.202248f) {
                                if (feat_array[1] <= 0.131241f) {
                                    // arc_fault_votes += 0; (Normal Vote)
                                } else {
                                    arc_fault_votes += 1;
                                }
                            } else {
                                if (feat_array[0] <= 0.102977f) {
                                    // arc_fault_votes += 0; (Normal Vote)
                                } else {
                                    arc_fault_votes += 1;
                                }
                            }
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[2] <= 0.279917f) {
                            if (feat_array[0] <= 0.127013f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        } else {
                            // arc_fault_votes += 0; (Normal Vote)
                        }
                    }
                } else {
                    if (feat_array[0] <= 0.144846f) {
                        if (feat_array[2] <= 0.358218f) {
                            arc_fault_votes += 1;
                        } else {
                            // arc_fault_votes += 0; (Normal Vote)
                        }
                    } else {
                        if (feat_array[1] <= 0.156814f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                }
            }
        } else {
            if (feat_array[2] <= 0.437828f) {
                if (feat_array[0] <= 0.148684f) {
                    if (feat_array[0] <= 0.147483f) {
                        if (feat_array[2] <= 0.369727f) {
                            arc_fault_votes += 1;
                        } else {
                            // arc_fault_votes += 0; (Normal Vote)
                        }
                    } else {
                        // arc_fault_votes += 0; (Normal Vote)
                    }
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 66
    // ----------------------------------------
        if (feat_array[0] <= 0.148302f) {
            if (feat_array[1] <= 0.167381f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[1] <= 0.151691f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 67
    // ----------------------------------------
        if (feat_array[1] <= 0.167635f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 68
    // ----------------------------------------
        if (feat_array[0] <= 0.146948f) {
            if (feat_array[0] <= 0.139390f) {
                if (feat_array[2] <= 0.199782f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[2] <= 0.200630f) {
                        arc_fault_votes += 1;
                    } else {
                        if (feat_array[0] <= 0.137234f) {
                            if (feat_array[2] <= 0.202241f) {
                                if (feat_array[0] <= 0.097500f) {
                                    // arc_fault_votes += 0; (Normal Vote)
                                } else {
                                    arc_fault_votes += 1;
                                }
                            } else {
                                if (feat_array[2] <= 0.321171f) {
                                    if (feat_array[0] <= 0.127568f) {
                                        // arc_fault_votes += 0; (Normal Vote)
                                    } else {
                                        arc_fault_votes += 1;
                                    }
                                } else {
                                    // arc_fault_votes += 0; (Normal Vote)
                                }
                            }
                        } else {
                            if (feat_array[2] <= 0.313672f) {
                                arc_fault_votes += 1;
                            } else {
                                // arc_fault_votes += 0; (Normal Vote)
                            }
                        }
                    }
                }
            } else {
                if (feat_array[0] <= 0.139611f) {
                    arc_fault_votes += 1;
                } else {
                    if (feat_array[1] <= 0.156447f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            }
        } else {
            if (feat_array[0] <= 0.148236f) {
                if (feat_array[0] <= 0.147516f) {
                    if (feat_array[1] <= 0.157947f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    // arc_fault_votes += 0; (Normal Vote)
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 69
    // ----------------------------------------
        if (feat_array[1] <= 0.167635f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 70
    // ----------------------------------------
        if (feat_array[1] <= 0.167332f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 71
    // ----------------------------------------
        if (feat_array[0] <= 0.148852f) {
            if (feat_array[0] <= 0.141057f) {
                if (feat_array[0] <= 0.126041f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[1] <= 0.152779f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            } else {
                if (feat_array[0] <= 0.147483f) {
                    if (feat_array[1] <= 0.156447f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    // arc_fault_votes += 0; (Normal Vote)
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 72
    // ----------------------------------------
        if (feat_array[0] <= 0.146744f) {
            if (feat_array[2] <= 0.199986f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                if (feat_array[0] <= 0.142682f) {
                    if (feat_array[0] <= 0.139391f) {
                        if (feat_array[0] <= 0.125939f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            if (feat_array[0] <= 0.126079f) {
                                arc_fault_votes += 1;
                            } else {
                                if (feat_array[0] <= 0.137474f) {
                                    if (feat_array[0] <= 0.137445f) {
                                        if (feat_array[1] <= 0.152779f) {
                                            // arc_fault_votes += 0; (Normal Vote)
                                        } else {
                                            arc_fault_votes += 1;
                                        }
                                    } else {
                                        arc_fault_votes += 1;
                                    }
                                } else {
                                    // arc_fault_votes += 0; (Normal Vote)
                                }
                            }
                        }
                    } else {
                        if (feat_array[0] <= 0.139470f) {
                            arc_fault_votes += 1;
                        } else {
                            if (feat_array[1] <= 0.157351f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        }
                    }
                } else {
                    if (feat_array[2] <= 0.357293f) {
                        arc_fault_votes += 1;
                    } else {
                        // arc_fault_votes += 0; (Normal Vote)
                    }
                }
            }
        } else {
            if (feat_array[0] <= 0.148852f) {
                if (feat_array[1] <= 0.161549f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 73
    // ----------------------------------------
        if (feat_array[1] <= 0.166988f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 74
    // ----------------------------------------
        if (feat_array[0] <= 0.148784f) {
            if (feat_array[1] <= 0.168110f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 75
    // ----------------------------------------
        if (feat_array[0] <= 0.146870f) {
            if (feat_array[1] <= 0.167381f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[2] <= 0.430073f) {
                if (feat_array[1] <= 0.152926f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 76
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 77
    // ----------------------------------------
        if (feat_array[0] <= 0.148302f) {
            if (feat_array[2] <= 0.199782f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                if (feat_array[0] <= 0.142712f) {
                    if (feat_array[2] <= 0.202336f) {
                        if (feat_array[1] <= 0.130987f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[0] <= 0.141357f) {
                            if (feat_array[0] <= 0.132302f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                if (feat_array[2] <= 0.337746f) {
                                    arc_fault_votes += 1;
                                } else {
                                    // arc_fault_votes += 0; (Normal Vote)
                                }
                            }
                        } else {
                            if (feat_array[2] <= 0.333003f) {
                                arc_fault_votes += 1;
                            } else {
                                // arc_fault_votes += 0; (Normal Vote)
                            }
                        }
                    }
                } else {
                    if (feat_array[2] <= 0.357293f) {
                        arc_fault_votes += 1;
                    } else {
                        // arc_fault_votes += 0; (Normal Vote)
                    }
                }
            }
        } else {
            if (feat_array[0] <= 0.148923f) {
                if (feat_array[2] <= 0.356437f) {
                    arc_fault_votes += 1;
                } else {
                    // arc_fault_votes += 0; (Normal Vote)
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 78
    // ----------------------------------------
        if (feat_array[0] <= 0.148784f) {
            if (feat_array[1] <= 0.167381f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 79
    // ----------------------------------------
        if (feat_array[2] <= 0.426437f) {
            if (feat_array[2] <= 0.262505f) {
                if (feat_array[2] <= 0.199782f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[0] <= 0.121904f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            } else {
                if (feat_array[0] <= 0.148784f) {
                    if (feat_array[0] <= 0.144093f) {
                        if (feat_array[0] <= 0.141058f) {
                            if (feat_array[0] <= 0.135622f) {
                                if (feat_array[1] <= 0.184083f) {
                                    // arc_fault_votes += 0; (Normal Vote)
                                } else {
                                    arc_fault_votes += 1;
                                }
                            } else {
                                if (feat_array[2] <= 0.309860f) {
                                    arc_fault_votes += 1;
                                } else {
                                    // arc_fault_votes += 0; (Normal Vote)
                                }
                            }
                        } else {
                            if (feat_array[2] <= 0.333888f) {
                                arc_fault_votes += 1;
                            } else {
                                // arc_fault_votes += 0; (Normal Vote)
                            }
                        }
                    } else {
                        if (feat_array[1] <= 0.154403f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            if (feat_array[2] <= 0.437661f) {
                if (feat_array[0] <= 0.175920f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 80
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 81
    // ----------------------------------------
        if (feat_array[2] <= 0.420960f) {
            if (feat_array[0] <= 0.144749f) {
                if (feat_array[1] <= 0.167635f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                if (feat_array[2] <= 0.405007f) {
                    if (feat_array[0] <= 0.145706f) {
                        if (feat_array[2] <= 0.354544f) {
                            arc_fault_votes += 1;
                        } else {
                            // arc_fault_votes += 0; (Normal Vote)
                        }
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[2] <= 0.405698f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        if (feat_array[2] <= 0.415028f) {
                            if (feat_array[1] <= 0.188292f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        } else {
                            if (feat_array[1] <= 0.187864f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        }
                    }
                }
            }
        } else {
            if (feat_array[2] <= 0.426691f) {
                if (feat_array[0] <= 0.174774f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                if (feat_array[0] <= 0.173131f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            }
        }

    // ----------------------------------------
    // TREE 82
    // ----------------------------------------
        if (feat_array[2] <= 0.426570f) {
            if (feat_array[1] <= 0.167635f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[0] <= 0.173813f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 83
    // ----------------------------------------
        if (feat_array[0] <= 0.148414f) {
            if (feat_array[2] <= 0.199414f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                if (feat_array[2] <= 0.326839f) {
                    if (feat_array[1] <= 0.165552f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    // arc_fault_votes += 0; (Normal Vote)
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 84
    // ----------------------------------------
        if (feat_array[0] <= 0.146948f) {
            if (feat_array[2] <= 0.199782f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                if (feat_array[1] <= 0.166733f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            if (feat_array[1] <= 0.156397f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 85
    // ----------------------------------------
        if (feat_array[1] <= 0.167512f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 86
    // ----------------------------------------
        if (feat_array[2] <= 0.426691f) {
            if (feat_array[0] <= 0.143799f) {
                if (feat_array[2] <= 0.199676f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[0] <= 0.139392f) {
                        if (feat_array[1] <= 0.167635f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[2] <= 0.326476f) {
                            arc_fault_votes += 1;
                        } else {
                            // arc_fault_votes += 0; (Normal Vote)
                        }
                    }
                }
            } else {
                if (feat_array[2] <= 0.387761f) {
                    arc_fault_votes += 1;
                } else {
                    if (feat_array[1] <= 0.180193f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            }
        } else {
            if (feat_array[1] <= 0.187551f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 87
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 88
    // ----------------------------------------
        if (feat_array[0] <= 0.148923f) {
            if (feat_array[1] <= 0.166988f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 89
    // ----------------------------------------
        if (feat_array[2] <= 0.426706f) {
            if (feat_array[1] <= 0.165806f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[1] <= 0.187551f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 90
    // ----------------------------------------
        if (feat_array[0] <= 0.148302f) {
            if (feat_array[0] <= 0.141357f) {
                if (feat_array[0] <= 0.126796f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[0] <= 0.126864f) {
                        arc_fault_votes += 1;
                    } else {
                        if (feat_array[0] <= 0.139391f) {
                            if (feat_array[1] <= 0.155960f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        } else {
                            if (feat_array[0] <= 0.139470f) {
                                arc_fault_votes += 1;
                            } else {
                                // arc_fault_votes += 0; (Normal Vote)
                            }
                        }
                    }
                }
            } else {
                if (feat_array[2] <= 0.356341f) {
                    arc_fault_votes += 1;
                } else {
                    // arc_fault_votes += 0; (Normal Vote)
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 91
    // ----------------------------------------
        if (feat_array[1] <= 0.167635f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 92
    // ----------------------------------------
        if (feat_array[1] <= 0.167332f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 93
    // ----------------------------------------
        if (feat_array[0] <= 0.146715f) {
            if (feat_array[2] <= 0.199986f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                if (feat_array[2] <= 0.202154f) {
                    arc_fault_votes += 1;
                } else {
                    if (feat_array[2] <= 0.327095f) {
                        if (feat_array[2] <= 0.326080f) {
                            if (feat_array[1] <= 0.169197f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        // arc_fault_votes += 0; (Normal Vote)
                    }
                }
            }
        } else {
            if (feat_array[0] <= 0.148784f) {
                if (feat_array[0] <= 0.147483f) {
                    if (feat_array[1] <= 0.164772f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[2] <= 0.356437f) {
                        arc_fault_votes += 1;
                    } else {
                        // arc_fault_votes += 0; (Normal Vote)
                    }
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 94
    // ----------------------------------------
        if (feat_array[2] <= 0.426403f) {
            if (feat_array[0] <= 0.148784f) {
                if (feat_array[0] <= 0.142679f) {
                    if (feat_array[1] <= 0.167635f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[2] <= 0.356642f) {
                        arc_fault_votes += 1;
                    } else {
                        // arc_fault_votes += 0; (Normal Vote)
                    }
                }
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[0] <= 0.173813f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 95
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 96
    // ----------------------------------------
        if (feat_array[0] <= 0.148852f) {
            if (feat_array[1] <= 0.167381f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 97
    // ----------------------------------------
        if (feat_array[2] <= 0.426440f) {
            if (feat_array[0] <= 0.145761f) {
                if (feat_array[1] <= 0.167332f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                if (feat_array[2] <= 0.410841f) {
                    if (feat_array[1] <= 0.153053f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[1] <= 0.187864f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            }
        } else {
            if (feat_array[0] <= 0.174511f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 98
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 99
    // ----------------------------------------
        if (feat_array[2] <= 0.426909f) {
            if (feat_array[1] <= 0.167635f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[0] <= 0.174088f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 100
    // ----------------------------------------
        if (feat_array[0] <= 0.148852f) {
            if (feat_array[0] <= 0.141520f) {
                if (feat_array[2] <= 0.199782f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[1] <= 0.167381f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            } else {
                if (feat_array[2] <= 0.356341f) {
                    arc_fault_votes += 1;
                } else {
                    // arc_fault_votes += 0; (Normal Vote)
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 101
    // ----------------------------------------
        if (feat_array[0] <= 0.148784f) {
            if (feat_array[2] <= 0.199880f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                if (feat_array[1] <= 0.167381f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 102
    // ----------------------------------------
        if (feat_array[0] <= 0.148236f) {
            if (feat_array[2] <= 0.199986f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                if (feat_array[2] <= 0.326839f) {
                    if (feat_array[1] <= 0.165552f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    // arc_fault_votes += 0; (Normal Vote)
                }
            }
        } else {
            if (feat_array[0] <= 0.148784f) {
                if (feat_array[2] <= 0.356437f) {
                    arc_fault_votes += 1;
                } else {
                    // arc_fault_votes += 0; (Normal Vote)
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 103
    // ----------------------------------------
        if (feat_array[0] <= 0.148302f) {
            if (feat_array[0] <= 0.141299f) {
                if (feat_array[0] <= 0.135622f) {
                    if (feat_array[1] <= 0.167381f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[1] <= 0.155561f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            } else {
                if (feat_array[1] <= 0.156447f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 104
    // ----------------------------------------
        if (feat_array[1] <= 0.165611f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 105
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 106
    // ----------------------------------------
        if (feat_array[2] <= 0.426358f) {
            if (feat_array[2] <= 0.303480f) {
                if (feat_array[0] <= 0.123658f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                if (feat_array[0] <= 0.148852f) {
                    if (feat_array[0] <= 0.144556f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        if (feat_array[0] <= 0.144809f) {
                            arc_fault_votes += 1;
                        } else {
                            if (feat_array[1] <= 0.161367f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        }
                    }
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            if (feat_array[1] <= 0.191768f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 107
    // ----------------------------------------
        if (feat_array[2] <= 0.420871f) {
            if (feat_array[1] <= 0.168475f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[2] <= 0.430075f) {
                if (feat_array[0] <= 0.174905f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                if (feat_array[2] <= 0.437661f) {
                    if (feat_array[1] <= 0.191535f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    arc_fault_votes += 1;
                }
            }
        }

    // ----------------------------------------
    // TREE 108
    // ----------------------------------------
        if (feat_array[2] <= 0.419314f) {
            if (feat_array[0] <= 0.145947f) {
                if (feat_array[1] <= 0.167635f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                if (feat_array[2] <= 0.412875f) {
                    arc_fault_votes += 1;
                } else {
                    if (feat_array[0] <= 0.176088f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            }
        } else {
            if (feat_array[2] <= 0.437661f) {
                if (feat_array[2] <= 0.426691f) {
                    if (feat_array[1] <= 0.189183f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[0] <= 0.175870f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 109
    // ----------------------------------------
        if (feat_array[2] <= 0.420789f) {
            if (feat_array[1] <= 0.166733f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[0] <= 0.173460f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 110
    // ----------------------------------------
        if (feat_array[2] <= 0.426536f) {
            if (feat_array[1] <= 0.167635f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[0] <= 0.174088f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 111
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 112
    // ----------------------------------------
        if (feat_array[2] <= 0.420789f) {
            if (feat_array[0] <= 0.142682f) {
                if (feat_array[2] <= 0.199986f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[2] <= 0.211738f) {
                        if (feat_array[1] <= 0.131102f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[2] <= 0.280014f) {
                            if (feat_array[0] <= 0.127818f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        } else {
                            if (feat_array[0] <= 0.133186f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                if (feat_array[0] <= 0.133202f) {
                                    arc_fault_votes += 1;
                                } else {
                                    // arc_fault_votes += 0; (Normal Vote)
                                }
                            }
                        }
                    }
                }
            } else {
                if (feat_array[1] <= 0.154285f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            if (feat_array[0] <= 0.173357f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 113
    // ----------------------------------------
        if (feat_array[1] <= 0.167332f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 114
    // ----------------------------------------
        if (feat_array[2] <= 0.426403f) {
            if (feat_array[0] <= 0.148230f) {
                if (feat_array[2] <= 0.199986f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[2] <= 0.202248f) {
                        if (feat_array[0] <= 0.094116f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[1] <= 0.170562f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                }
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[0] <= 0.173406f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 115
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 116
    // ----------------------------------------
        if (feat_array[0] <= 0.148784f) {
            if (feat_array[2] <= 0.199986f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                if (feat_array[2] <= 0.202248f) {
                    arc_fault_votes += 1;
                } else {
                    if (feat_array[1] <= 0.171660f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 117
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 118
    // ----------------------------------------
        if (feat_array[2] <= 0.421658f) {
            if (feat_array[0] <= 0.144004f) {
                if (feat_array[1] <= 0.167332f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                if (feat_array[1] <= 0.154285f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            if (feat_array[2] <= 0.437661f) {
                if (feat_array[2] <= 0.426190f) {
                    if (feat_array[0] <= 0.176110f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[0] <= 0.175034f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 119
    // ----------------------------------------
        if (feat_array[0] <= 0.148796f) {
            if (feat_array[0] <= 0.143233f) {
                if (feat_array[2] <= 0.199782f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[1] <= 0.167332f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            } else {
                if (feat_array[1] <= 0.156401f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 120
    // ----------------------------------------
        if (feat_array[0] <= 0.146715f) {
            if (feat_array[2] <= 0.199676f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                if (feat_array[1] <= 0.167635f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            if (feat_array[1] <= 0.153164f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 121
    // ----------------------------------------
        if (feat_array[1] <= 0.167332f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 122
    // ----------------------------------------
        if (feat_array[1] <= 0.168159f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 123
    // ----------------------------------------
        if (feat_array[2] <= 0.426691f) {
            if (feat_array[2] <= 0.262505f) {
                if (feat_array[0] <= 0.121030f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                if (feat_array[1] <= 0.171611f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            if (feat_array[2] <= 0.436562f) {
                if (feat_array[1] <= 0.192643f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                if (feat_array[0] <= 0.173082f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            }
        }

    // ----------------------------------------
    // TREE 124
    // ----------------------------------------
        if (feat_array[1] <= 0.171026f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 125
    // ----------------------------------------
        if (feat_array[0] <= 0.148784f) {
            if (feat_array[0] <= 0.140842f) {
                if (feat_array[0] <= 0.126041f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[0] <= 0.126115f) {
                        arc_fault_votes += 1;
                    } else {
                        if (feat_array[0] <= 0.126616f) {
                            if (feat_array[2] <= 0.278792f) {
                                arc_fault_votes += 1;
                            } else {
                                // arc_fault_votes += 0; (Normal Vote)
                            }
                        } else {
                            if (feat_array[2] <= 0.337771f) {
                                arc_fault_votes += 1;
                            } else {
                                // arc_fault_votes += 0; (Normal Vote)
                            }
                        }
                    }
                }
            } else {
                if (feat_array[0] <= 0.144852f) {
                    if (feat_array[1] <= 0.154080f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[0] <= 0.145137f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        if (feat_array[1] <= 0.156447f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 126
    // ----------------------------------------
        if (feat_array[0] <= 0.148784f) {
            if (feat_array[1] <= 0.167503f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 127
    // ----------------------------------------
        if (feat_array[0] <= 0.148414f) {
            if (feat_array[0] <= 0.142682f) {
                if (feat_array[1] <= 0.166725f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                if (feat_array[0] <= 0.147398f) {
                    if (feat_array[1] <= 0.156286f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    // arc_fault_votes += 0; (Normal Vote)
                }
            }
        } else {
            if (feat_array[2] <= 0.411342f) {
                if (feat_array[2] <= 0.410841f) {
                    arc_fault_votes += 1;
                } else {
                    // arc_fault_votes += 0; (Normal Vote)
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 128
    // ----------------------------------------
        if (feat_array[0] <= 0.148784f) {
            if (feat_array[1] <= 0.167381f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 129
    // ----------------------------------------
        if (feat_array[0] <= 0.146848f) {
            if (feat_array[2] <= 0.199210f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                if (feat_array[2] <= 0.205085f) {
                    if (feat_array[1] <= 0.130987f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[2] <= 0.326839f) {
                        if (feat_array[0] <= 0.128419f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        // arc_fault_votes += 0; (Normal Vote)
                    }
                }
            }
        } else {
            if (feat_array[2] <= 0.430051f) {
                if (feat_array[2] <= 0.412802f) {
                    arc_fault_votes += 1;
                } else {
                    if (feat_array[2] <= 0.417428f) {
                        if (feat_array[2] <= 0.413236f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            if (feat_array[0] <= 0.176942f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        }
                    } else {
                        if (feat_array[1] <= 0.183881f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 130
    // ----------------------------------------
        if (feat_array[2] <= 0.426437f) {
            if (feat_array[0] <= 0.144684f) {
                if (feat_array[0] <= 0.141357f) {
                    if (feat_array[2] <= 0.199782f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        if (feat_array[2] <= 0.202248f) {
                            if (feat_array[0] <= 0.096884f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        } else {
                            if (feat_array[0] <= 0.139428f) {
                                if (feat_array[1] <= 0.171026f) {
                                    // arc_fault_votes += 0; (Normal Vote)
                                } else {
                                    arc_fault_votes += 1;
                                }
                            } else {
                                if (feat_array[0] <= 0.139470f) {
                                    arc_fault_votes += 1;
                                } else {
                                    // arc_fault_votes += 0; (Normal Vote)
                                }
                            }
                        }
                    }
                } else {
                    if (feat_array[1] <= 0.156162f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            } else {
                if (feat_array[2] <= 0.409244f) {
                    if (feat_array[1] <= 0.150471f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[2] <= 0.417769f) {
                        if (feat_array[0] <= 0.159284f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[0] <= 0.174774f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                }
            }
        } else {
            if (feat_array[2] <= 0.436382f) {
                if (feat_array[2] <= 0.429728f) {
                    arc_fault_votes += 1;
                } else {
                    if (feat_array[0] <= 0.176601f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 131
    // ----------------------------------------
        if (feat_array[0] <= 0.146948f) {
            if (feat_array[0] <= 0.140842f) {
                if (feat_array[2] <= 0.201886f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[2] <= 0.202248f) {
                        arc_fault_votes += 1;
                    } else {
                        if (feat_array[2] <= 0.219695f) {
                            if (feat_array[0] <= 0.109675f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        } else {
                            if (feat_array[1] <= 0.182958f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        }
                    }
                }
            } else {
                if (feat_array[1] <= 0.156447f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            if (feat_array[0] <= 0.149029f) {
                if (feat_array[2] <= 0.368738f) {
                    arc_fault_votes += 1;
                } else {
                    // arc_fault_votes += 0; (Normal Vote)
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 132
    // ----------------------------------------
        if (feat_array[0] <= 0.148725f) {
            if (feat_array[0] <= 0.140218f) {
                if (feat_array[0] <= 0.126041f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[2] <= 0.309836f) {
                        arc_fault_votes += 1;
                    } else {
                        // arc_fault_votes += 0; (Normal Vote)
                    }
                }
            } else {
                if (feat_array[1] <= 0.156814f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 133
    // ----------------------------------------
        if (feat_array[2] <= 0.425462f) {
            if (feat_array[0] <= 0.144623f) {
                if (feat_array[1] <= 0.167381f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                if (feat_array[0] <= 0.148852f) {
                    if (feat_array[2] <= 0.359462f) {
                        arc_fault_votes += 1;
                    } else {
                        // arc_fault_votes += 0; (Normal Vote)
                    }
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            if (feat_array[0] <= 0.173813f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 134
    // ----------------------------------------
        if (feat_array[0] <= 0.148302f) {
            if (feat_array[2] <= 0.199782f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                if (feat_array[1] <= 0.167635f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 135
    // ----------------------------------------
        if (feat_array[1] <= 0.167332f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 136
    // ----------------------------------------
        if (feat_array[1] <= 0.167332f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 137
    // ----------------------------------------
        if (feat_array[2] <= 0.419519f) {
            if (feat_array[2] <= 0.255451f) {
                if (feat_array[2] <= 0.199782f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[1] <= 0.146475f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            } else {
                if (feat_array[2] <= 0.380314f) {
                    if (feat_array[2] <= 0.307444f) {
                        if (feat_array[0] <= 0.130702f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[1] <= 0.178574f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                } else {
                    if (feat_array[2] <= 0.410649f) {
                        if (feat_array[0] <= 0.157753f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[1] <= 0.189173f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                }
            }
        } else {
            if (feat_array[2] <= 0.436562f) {
                if (feat_array[1] <= 0.189851f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 138
    // ----------------------------------------
        if (feat_array[1] <= 0.167332f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 139
    // ----------------------------------------
        if (feat_array[0] <= 0.148784f) {
            if (feat_array[0] <= 0.142849f) {
                if (feat_array[1] <= 0.168475f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                if (feat_array[2] <= 0.357500f) {
                    arc_fault_votes += 1;
                } else {
                    // arc_fault_votes += 0; (Normal Vote)
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 140
    // ----------------------------------------
        if (feat_array[2] <= 0.426706f) {
            if (feat_array[1] <= 0.168159f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[0] <= 0.173813f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 141
    // ----------------------------------------
        if (feat_array[0] <= 0.148784f) {
            if (feat_array[0] <= 0.142184f) {
                if (feat_array[1] <= 0.167635f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                if (feat_array[0] <= 0.147483f) {
                    if (feat_array[1] <= 0.156447f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[0] <= 0.148414f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        if (feat_array[0] <= 0.148541f) {
                            arc_fault_votes += 1;
                        } else {
                            // arc_fault_votes += 0; (Normal Vote)
                        }
                    }
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 142
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 143
    // ----------------------------------------
        if (feat_array[2] <= 0.426691f) {
            if (feat_array[1] <= 0.167635f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[2] <= 0.437661f) {
                if (feat_array[0] <= 0.177345f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 144
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 145
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 146
    // ----------------------------------------
        if (feat_array[1] <= 0.166725f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 147
    // ----------------------------------------
        if (feat_array[2] <= 0.420871f) {
            if (feat_array[2] <= 0.279115f) {
                if (feat_array[2] <= 0.199986f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[0] <= 0.122726f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            } else {
                if (feat_array[1] <= 0.173651f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            if (feat_array[0] <= 0.174905f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 148
    // ----------------------------------------
        if (feat_array[2] <= 0.426570f) {
            if (feat_array[0] <= 0.146216f) {
                if (feat_array[0] <= 0.142184f) {
                    if (feat_array[2] <= 0.199676f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        if (feat_array[2] <= 0.202336f) {
                            if (feat_array[1] <= 0.130501f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        } else {
                            if (feat_array[0] <= 0.139391f) {
                                if (feat_array[1] <= 0.172932f) {
                                    // arc_fault_votes += 0; (Normal Vote)
                                } else {
                                    arc_fault_votes += 1;
                                }
                            } else {
                                if (feat_array[0] <= 0.139470f) {
                                    arc_fault_votes += 1;
                                } else {
                                    if (feat_array[2] <= 0.310490f) {
                                        arc_fault_votes += 1;
                                    } else {
                                        // arc_fault_votes += 0; (Normal Vote)
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (feat_array[0] <= 0.145476f) {
                        if (feat_array[2] <= 0.356175f) {
                            arc_fault_votes += 1;
                        } else {
                            // arc_fault_votes += 0; (Normal Vote)
                        }
                    } else {
                        if (feat_array[0] <= 0.145560f) {
                            if (feat_array[1] <= 0.152999f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        } else {
                            // arc_fault_votes += 0; (Normal Vote)
                        }
                    }
                }
            } else {
                if (feat_array[0] <= 0.148784f) {
                    if (feat_array[2] <= 0.366583f) {
                        arc_fault_votes += 1;
                    } else {
                        // arc_fault_votes += 0; (Normal Vote)
                    }
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            if (feat_array[0] <= 0.173813f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 149
    // ----------------------------------------
        if (feat_array[2] <= 0.426691f) {
            if (feat_array[2] <= 0.256195f) {
                if (feat_array[1] <= 0.146803f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                if (feat_array[1] <= 0.171425f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            if (feat_array[2] <= 0.437661f) {
                if (feat_array[2] <= 0.435065f) {
                    if (feat_array[0] <= 0.175034f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[0] <= 0.177232f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 150
    // ----------------------------------------
        if (feat_array[1] <= 0.166733f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 151
    // ----------------------------------------
        if (feat_array[1] <= 0.167635f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 152
    // ----------------------------------------
        if (feat_array[0] <= 0.148414f) {
            if (feat_array[2] <= 0.199782f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                if (feat_array[2] <= 0.200630f) {
                    arc_fault_votes += 1;
                } else {
                    if (feat_array[1] <= 0.168159f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            }
        } else {
            if (feat_array[1] <= 0.152311f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 153
    // ----------------------------------------
        if (feat_array[1] <= 0.168110f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 154
    // ----------------------------------------
        if (feat_array[2] <= 0.423752f) {
            if (feat_array[2] <= 0.261083f) {
                if (feat_array[1] <= 0.146475f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                if (feat_array[0] <= 0.144744f) {
                    if (feat_array[1] <= 0.176250f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[2] <= 0.411114f) {
                        if (feat_array[0] <= 0.145947f) {
                            if (feat_array[2] <= 0.359462f) {
                                arc_fault_votes += 1;
                            } else {
                                // arc_fault_votes += 0; (Normal Vote)
                            }
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[0] <= 0.174563f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                }
            }
        } else {
            if (feat_array[2] <= 0.437384f) {
                if (feat_array[2] <= 0.437078f) {
                    if (feat_array[2] <= 0.430034f) {
                        if (feat_array[1] <= 0.186903f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[1] <= 0.195363f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                } else {
                    // arc_fault_votes += 0; (Normal Vote)
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 155
    // ----------------------------------------
        if (feat_array[2] <= 0.426691f) {
            if (feat_array[2] <= 0.264626f) {
                if (feat_array[2] <= 0.199676f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[0] <= 0.121727f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            } else {
                if (feat_array[0] <= 0.148784f) {
                    if (feat_array[2] <= 0.266730f) {
                        if (feat_array[1] <= 0.153339f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[0] <= 0.144093f) {
                            if (feat_array[2] <= 0.280014f) {
                                if (feat_array[0] <= 0.130304f) {
                                    // arc_fault_votes += 0; (Normal Vote)
                                } else {
                                    arc_fault_votes += 1;
                                }
                            } else {
                                if (feat_array[0] <= 0.133186f) {
                                    // arc_fault_votes += 0; (Normal Vote)
                                } else {
                                    if (feat_array[0] <= 0.133202f) {
                                        arc_fault_votes += 1;
                                    } else {
                                        // arc_fault_votes += 0; (Normal Vote)
                                    }
                                }
                            }
                        } else {
                            if (feat_array[0] <= 0.147310f) {
                                if (feat_array[0] <= 0.146744f) {
                                    if (feat_array[1] <= 0.155746f) {
                                        // arc_fault_votes += 0; (Normal Vote)
                                    } else {
                                        arc_fault_votes += 1;
                                    }
                                } else {
                                    arc_fault_votes += 1;
                                }
                            } else {
                                // arc_fault_votes += 0; (Normal Vote)
                            }
                        }
                    }
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            if (feat_array[2] <= 0.437661f) {
                if (feat_array[1] <= 0.187551f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 156
    // ----------------------------------------
        if (feat_array[2] <= 0.420853f) {
            if (feat_array[2] <= 0.261437f) {
                if (feat_array[0] <= 0.122156f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                if (feat_array[1] <= 0.171660f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            if (feat_array[2] <= 0.437828f) {
                if (feat_array[2] <= 0.422441f) {
                    if (feat_array[0] <= 0.180827f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[2] <= 0.426691f) {
                        if (feat_array[0] <= 0.174203f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[0] <= 0.175034f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 157
    // ----------------------------------------
        if (feat_array[1] <= 0.166988f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 158
    // ----------------------------------------
        if (feat_array[1] <= 0.167635f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 159
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 160
    // ----------------------------------------
        if (feat_array[2] <= 0.420853f) {
            if (feat_array[0] <= 0.145947f) {
                if (feat_array[1] <= 0.167381f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                if (feat_array[2] <= 0.410052f) {
                    arc_fault_votes += 1;
                } else {
                    if (feat_array[2] <= 0.411615f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        if (feat_array[1] <= 0.187133f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                }
            }
        } else {
            if (feat_array[2] <= 0.437661f) {
                if (feat_array[1] <= 0.195200f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 161
    // ----------------------------------------
        if (feat_array[1] <= 0.167332f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 162
    // ----------------------------------------
        if (feat_array[1] <= 0.168159f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 163
    // ----------------------------------------
        if (feat_array[0] <= 0.148852f) {
            if (feat_array[0] <= 0.141357f) {
                if (feat_array[0] <= 0.139428f) {
                    if (feat_array[1] <= 0.168524f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[2] <= 0.309552f) {
                        arc_fault_votes += 1;
                    } else {
                        // arc_fault_votes += 0; (Normal Vote)
                    }
                }
            } else {
                if (feat_array[0] <= 0.141668f) {
                    if (feat_array[0] <= 0.141485f) {
                        arc_fault_votes += 1;
                    } else {
                        if (feat_array[0] <= 0.141520f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                } else {
                    if (feat_array[2] <= 0.356409f) {
                        arc_fault_votes += 1;
                    } else {
                        // arc_fault_votes += 0; (Normal Vote)
                    }
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 164
    // ----------------------------------------
        if (feat_array[0] <= 0.148784f) {
            if (feat_array[2] <= 0.199782f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                if (feat_array[2] <= 0.202336f) {
                    if (feat_array[2] <= 0.200834f) {
                        arc_fault_votes += 1;
                    } else {
                        if (feat_array[0] <= 0.094116f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                } else {
                    if (feat_array[0] <= 0.142599f) {
                        if (feat_array[1] <= 0.172932f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[2] <= 0.356435f) {
                            arc_fault_votes += 1;
                        } else {
                            // arc_fault_votes += 0; (Normal Vote)
                        }
                    }
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 165
    // ----------------------------------------
        if (feat_array[0] <= 0.145761f) {
            if (feat_array[1] <= 0.167586f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[1] <= 0.156214f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 166
    // ----------------------------------------
        if (feat_array[0] <= 0.148784f) {
            if (feat_array[0] <= 0.142682f) {
                if (feat_array[1] <= 0.167381f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                if (feat_array[2] <= 0.357293f) {
                    arc_fault_votes += 1;
                } else {
                    // arc_fault_votes += 0; (Normal Vote)
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 167
    // ----------------------------------------
        if (feat_array[2] <= 0.426909f) {
            if (feat_array[1] <= 0.167381f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[0] <= 0.173830f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 168
    // ----------------------------------------
        if (feat_array[2] <= 0.423819f) {
            if (feat_array[2] <= 0.261088f) {
                if (feat_array[2] <= 0.199880f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[0] <= 0.121590f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            } else {
                if (feat_array[0] <= 0.148784f) {
                    if (feat_array[1] <= 0.172073f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            if (feat_array[2] <= 0.437661f) {
                if (feat_array[1] <= 0.187551f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 169
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 170
    // ----------------------------------------
        if (feat_array[2] <= 0.426403f) {
            if (feat_array[0] <= 0.142977f) {
                if (feat_array[0] <= 0.140842f) {
                    if (feat_array[2] <= 0.199782f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        if (feat_array[1] <= 0.167381f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                } else {
                    if (feat_array[2] <= 0.333003f) {
                        arc_fault_votes += 1;
                    } else {
                        // arc_fault_votes += 0; (Normal Vote)
                    }
                }
            } else {
                if (feat_array[0] <= 0.148414f) {
                    if (feat_array[2] <= 0.358174f) {
                        arc_fault_votes += 1;
                    } else {
                        // arc_fault_votes += 0; (Normal Vote)
                    }
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            if (feat_array[0] <= 0.173813f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 171
    // ----------------------------------------
        if (feat_array[2] <= 0.426691f) {
            if (feat_array[1] <= 0.166733f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[0] <= 0.173813f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 172
    // ----------------------------------------
        if (feat_array[1] <= 0.167332f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 173
    // ----------------------------------------
        if (feat_array[2] <= 0.426585f) {
            if (feat_array[0] <= 0.148414f) {
                if (feat_array[2] <= 0.199782f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[0] <= 0.140842f) {
                        if (feat_array[0] <= 0.126558f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            if (feat_array[0] <= 0.126578f) {
                                arc_fault_votes += 1;
                            } else {
                                if (feat_array[2] <= 0.337746f) {
                                    arc_fault_votes += 1;
                                } else {
                                    // arc_fault_votes += 0; (Normal Vote)
                                }
                            }
                        }
                    } else {
                        if (feat_array[2] <= 0.356409f) {
                            arc_fault_votes += 1;
                        } else {
                            // arc_fault_votes += 0; (Normal Vote)
                        }
                    }
                }
            } else {
                if (feat_array[0] <= 0.148852f) {
                    if (feat_array[0] <= 0.148541f) {
                        arc_fault_votes += 1;
                    } else {
                        // arc_fault_votes += 0; (Normal Vote)
                    }
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            if (feat_array[1] <= 0.187551f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 174
    // ----------------------------------------
        if (feat_array[2] <= 0.420871f) {
            if (feat_array[1] <= 0.167635f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[1] <= 0.191768f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 175
    // ----------------------------------------
        if (feat_array[2] <= 0.426706f) {
            if (feat_array[0] <= 0.148414f) {
                if (feat_array[2] <= 0.199782f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[0] <= 0.141058f) {
                        if (feat_array[0] <= 0.125939f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            if (feat_array[1] <= 0.153034f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        }
                    } else {
                        if (feat_array[1] <= 0.155333f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                }
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[1] <= 0.187551f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 176
    // ----------------------------------------
        if (feat_array[2] <= 0.426437f) {
            if (feat_array[1] <= 0.167381f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[2] <= 0.437661f) {
                if (feat_array[1] <= 0.187551f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 177
    // ----------------------------------------
        if (feat_array[2] <= 0.426440f) {
            if (feat_array[2] <= 0.264626f) {
                if (feat_array[0] <= 0.121904f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                if (feat_array[0] <= 0.146976f) {
                    if (feat_array[1] <= 0.172024f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[1] <= 0.158529f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            }
        } else {
            if (feat_array[0] <= 0.173131f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 178
    // ----------------------------------------
        if (feat_array[2] <= 0.426403f) {
            if (feat_array[0] <= 0.148852f) {
                if (feat_array[1] <= 0.167381f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[0] <= 0.173131f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 179
    // ----------------------------------------
        if (feat_array[0] <= 0.148784f) {
            if (feat_array[2] <= 0.205225f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                if (feat_array[1] <= 0.170562f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 180
    // ----------------------------------------
        if (feat_array[1] <= 0.167635f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 181
    // ----------------------------------------
        if (feat_array[0] <= 0.146703f) {
            if (feat_array[2] <= 0.199676f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                if (feat_array[2] <= 0.203079f) {
                    if (feat_array[0] <= 0.096884f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[1] <= 0.172097f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            }
        } else {
            if (feat_array[0] <= 0.148658f) {
                if (feat_array[2] <= 0.368206f) {
                    arc_fault_votes += 1;
                } else {
                    // arc_fault_votes += 0; (Normal Vote)
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 182
    // ----------------------------------------
        if (feat_array[2] <= 0.426437f) {
            if (feat_array[2] <= 0.255454f) {
                if (feat_array[2] <= 0.199986f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[0] <= 0.116647f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            } else {
                if (feat_array[2] <= 0.301919f) {
                    if (feat_array[1] <= 0.156218f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[2] <= 0.357723f) {
                        if (feat_array[1] <= 0.179506f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[2] <= 0.411024f) {
                            if (feat_array[0] <= 0.150103f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        } else {
                            if (feat_array[2] <= 0.412839f) {
                                if (feat_array[1] <= 0.189617f) {
                                    // arc_fault_votes += 0; (Normal Vote)
                                } else {
                                    arc_fault_votes += 1;
                                }
                            } else {
                                if (feat_array[0] <= 0.174868f) {
                                    // arc_fault_votes += 0; (Normal Vote)
                                } else {
                                    arc_fault_votes += 1;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (feat_array[1] <= 0.191768f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 183
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 184
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 185
    // ----------------------------------------
        if (feat_array[0] <= 0.148658f) {
            if (feat_array[1] <= 0.167332f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 186
    // ----------------------------------------
        if (feat_array[2] <= 0.426691f) {
            if (feat_array[1] <= 0.167635f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[0] <= 0.173813f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 187
    // ----------------------------------------
        if (feat_array[0] <= 0.147080f) {
            if (feat_array[0] <= 0.140192f) {
                if (feat_array[0] <= 0.126796f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[0] <= 0.126901f) {
                        arc_fault_votes += 1;
                    } else {
                        if (feat_array[0] <= 0.133202f) {
                            if (feat_array[1] <= 0.149979f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        } else {
                            if (feat_array[0] <= 0.139428f) {
                                if (feat_array[0] <= 0.135578f) {
                                    // arc_fault_votes += 0; (Normal Vote)
                                } else {
                                    if (feat_array[1] <= 0.158252f) {
                                        // arc_fault_votes += 0; (Normal Vote)
                                    } else {
                                        arc_fault_votes += 1;
                                    }
                                }
                            } else {
                                if (feat_array[0] <= 0.139492f) {
                                    arc_fault_votes += 1;
                                } else {
                                    // arc_fault_votes += 0; (Normal Vote)
                                }
                            }
                        }
                    }
                }
            } else {
                if (feat_array[2] <= 0.334784f) {
                    arc_fault_votes += 1;
                } else {
                    // arc_fault_votes += 0; (Normal Vote)
                }
            }
        } else {
            if (feat_array[2] <= 0.430073f) {
                if (feat_array[1] <= 0.155569f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 188
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 189
    // ----------------------------------------
        if (feat_array[1] <= 0.167332f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 190
    // ----------------------------------------
        if (feat_array[0] <= 0.148658f) {
            if (feat_array[1] <= 0.168110f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 191
    // ----------------------------------------
        if (feat_array[0] <= 0.148784f) {
            if (feat_array[1] <= 0.171026f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 192
    // ----------------------------------------
        if (feat_array[2] <= 0.426691f) {
            if (feat_array[0] <= 0.148784f) {
                if (feat_array[0] <= 0.142712f) {
                    if (feat_array[2] <= 0.199782f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        if (feat_array[0] <= 0.126041f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            if (feat_array[0] <= 0.126079f) {
                                arc_fault_votes += 1;
                            } else {
                                if (feat_array[0] <= 0.126864f) {
                                    if (feat_array[2] <= 0.281770f) {
                                        arc_fault_votes += 1;
                                    } else {
                                        // arc_fault_votes += 0; (Normal Vote)
                                    }
                                } else {
                                    if (feat_array[0] <= 0.140842f) {
                                        if (feat_array[0] <= 0.132302f) {
                                            // arc_fault_votes += 0; (Normal Vote)
                                        } else {
                                            // arc_fault_votes += 0; (Normal Vote)
                                        }
                                    } else {
                                        if (feat_array[0] <= 0.140960f) {
                                            arc_fault_votes += 1;
                                        } else {
                                            // arc_fault_votes += 0; (Normal Vote)
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (feat_array[1] <= 0.155333f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[0] <= 0.173070f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 193
    // ----------------------------------------
        if (feat_array[0] <= 0.148923f) {
            if (feat_array[0] <= 0.143199f) {
                if (feat_array[2] <= 0.199676f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[1] <= 0.167332f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            } else {
                if (feat_array[1] <= 0.156447f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 194
    // ----------------------------------------
        if (feat_array[0] <= 0.148414f) {
            if (feat_array[0] <= 0.142712f) {
                if (feat_array[0] <= 0.126571f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[2] <= 0.317160f) {
                        arc_fault_votes += 1;
                    } else {
                        // arc_fault_votes += 0; (Normal Vote)
                    }
                }
            } else {
                if (feat_array[0] <= 0.147398f) {
                    if (feat_array[0] <= 0.147080f) {
                        if (feat_array[1] <= 0.156447f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[2] <= 0.369727f) {
                            arc_fault_votes += 1;
                        } else {
                            // arc_fault_votes += 0; (Normal Vote)
                        }
                    }
                } else {
                    // arc_fault_votes += 0; (Normal Vote)
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 195
    // ----------------------------------------
        if (feat_array[0] <= 0.148784f) {
            if (feat_array[1] <= 0.166733f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 196
    // ----------------------------------------
        if (feat_array[0] <= 0.148265f) {
            if (feat_array[1] <= 0.167381f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 197
    // ----------------------------------------
        if (feat_array[1] <= 0.168110f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 198
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 199
    // ----------------------------------------
        if (feat_array[0] <= 0.148784f) {
            if (feat_array[2] <= 0.199986f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                if (feat_array[1] <= 0.167381f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 200
    // ----------------------------------------
        if (feat_array[2] <= 0.426403f) {
            if (feat_array[2] <= 0.249961f) {
                if (feat_array[2] <= 0.199676f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[2] <= 0.202154f) {
                        if (feat_array[0] <= 0.094484f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[1] <= 0.147246f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                }
            } else {
                if (feat_array[0] <= 0.148852f) {
                    if (feat_array[2] <= 0.251355f) {
                        if (feat_array[0] <= 0.112959f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[1] <= 0.172047f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            if (feat_array[0] <= 0.174088f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 201
    // ----------------------------------------
        if (feat_array[0] <= 0.148784f) {
            if (feat_array[0] <= 0.140842f) {
                if (feat_array[1] <= 0.167381f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                if (feat_array[0] <= 0.147398f) {
                    if (feat_array[0] <= 0.146744f) {
                        if (feat_array[1] <= 0.156447f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    // arc_fault_votes += 0; (Normal Vote)
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 202
    // ----------------------------------------
        if (feat_array[2] <= 0.426691f) {
            if (feat_array[0] <= 0.145761f) {
                if (feat_array[0] <= 0.141357f) {
                    if (feat_array[1] <= 0.166733f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[2] <= 0.350603f) {
                        arc_fault_votes += 1;
                    } else {
                        // arc_fault_votes += 0; (Normal Vote)
                    }
                }
            } else {
                if (feat_array[0] <= 0.148265f) {
                    if (feat_array[0] <= 0.147430f) {
                        if (feat_array[1] <= 0.153394f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        // arc_fault_votes += 0; (Normal Vote)
                    }
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            if (feat_array[2] <= 0.436562f) {
                if (feat_array[0] <= 0.176601f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 203
    // ----------------------------------------
        if (feat_array[2] <= 0.423404f) {
            if (feat_array[1] <= 0.167635f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[1] <= 0.187505f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 204
    // ----------------------------------------
        if (feat_array[2] <= 0.426265f) {
            if (feat_array[1] <= 0.168524f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[2] <= 0.437384f) {
                if (feat_array[1] <= 0.192689f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 205
    // ----------------------------------------
        if (feat_array[0] <= 0.148613f) {
            if (feat_array[1] <= 0.167635f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 206
    // ----------------------------------------
        if (feat_array[0] <= 0.148414f) {
            if (feat_array[1] <= 0.166733f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 207
    // ----------------------------------------
        if (feat_array[2] <= 0.426437f) {
            if (feat_array[1] <= 0.167381f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[0] <= 0.173813f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 208
    // ----------------------------------------
        if (feat_array[2] <= 0.425462f) {
            if (feat_array[0] <= 0.144012f) {
                if (feat_array[0] <= 0.140842f) {
                    if (feat_array[0] <= 0.135622f) {
                        if (feat_array[2] <= 0.199676f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            if (feat_array[2] <= 0.202154f) {
                                if (feat_array[1] <= 0.130501f) {
                                    // arc_fault_votes += 0; (Normal Vote)
                                } else {
                                    arc_fault_votes += 1;
                                }
                            } else {
                                if (feat_array[0] <= 0.130110f) {
                                    // arc_fault_votes += 0; (Normal Vote)
                                } else {
                                    if (feat_array[2] <= 0.285595f) {
                                        arc_fault_votes += 1;
                                    } else {
                                        // arc_fault_votes += 0; (Normal Vote)
                                    }
                                }
                            }
                        }
                    } else {
                        if (feat_array[2] <= 0.309860f) {
                            arc_fault_votes += 1;
                        } else {
                            // arc_fault_votes += 0; (Normal Vote)
                        }
                    }
                } else {
                    if (feat_array[1] <= 0.157530f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            } else {
                if (feat_array[0] <= 0.148784f) {
                    if (feat_array[0] <= 0.144852f) {
                        if (feat_array[0] <= 0.144505f) {
                            if (feat_array[1] <= 0.158287f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[2] <= 0.359462f) {
                            arc_fault_votes += 1;
                        } else {
                            // arc_fault_votes += 0; (Normal Vote)
                        }
                    }
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            if (feat_array[1] <= 0.187505f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 209
    // ----------------------------------------
        if (feat_array[1] <= 0.167586f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 210
    // ----------------------------------------
        if (feat_array[0] <= 0.148852f) {
            if (feat_array[1] <= 0.167381f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 211
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 212
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 213
    // ----------------------------------------
        if (feat_array[0] <= 0.148784f) {
            if (feat_array[2] <= 0.201980f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                if (feat_array[2] <= 0.326771f) {
                    if (feat_array[0] <= 0.124005f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    // arc_fault_votes += 0; (Normal Vote)
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 214
    // ----------------------------------------
        if (feat_array[2] <= 0.426361f) {
            if (feat_array[2] <= 0.261083f) {
                if (feat_array[2] <= 0.199676f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[2] <= 0.202154f) {
                        if (feat_array[2] <= 0.200834f) {
                            arc_fault_votes += 1;
                        } else {
                            if (feat_array[0] <= 0.094731f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        }
                    } else {
                        if (feat_array[0] <= 0.123926f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                }
            } else {
                if (feat_array[2] <= 0.362119f) {
                    if (feat_array[1] <= 0.172024f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[0] <= 0.158968f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            }
        } else {
            if (feat_array[1] <= 0.187551f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 215
    // ----------------------------------------
        if (feat_array[1] <= 0.167635f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 216
    // ----------------------------------------
        if (feat_array[2] <= 0.426437f) {
            if (feat_array[2] <= 0.298461f) {
                if (feat_array[0] <= 0.124027f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                if (feat_array[2] <= 0.353275f) {
                    if (feat_array[2] <= 0.318541f) {
                        if (feat_array[1] <= 0.172690f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[1] <= 0.181357f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                } else {
                    if (feat_array[0] <= 0.149797f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            }
        } else {
            if (feat_array[2] <= 0.437661f) {
                if (feat_array[0] <= 0.174985f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 217
    // ----------------------------------------
        if (feat_array[1] <= 0.168159f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 218
    // ----------------------------------------
        if (feat_array[1] <= 0.167332f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 219
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 220
    // ----------------------------------------
        if (feat_array[1] <= 0.167332f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 221
    // ----------------------------------------
        if (feat_array[0] <= 0.148414f) {
            if (feat_array[1] <= 0.167635f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 222
    // ----------------------------------------
        if (feat_array[0] <= 0.145763f) {
            if (feat_array[0] <= 0.141282f) {
                if (feat_array[0] <= 0.125939f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[1] <= 0.152733f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                }
            } else {
                if (feat_array[2] <= 0.351219f) {
                    arc_fault_votes += 1;
                } else {
                    // arc_fault_votes += 0; (Normal Vote)
                }
            }
        } else {
            if (feat_array[1] <= 0.156096f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 223
    // ----------------------------------------
        if (feat_array[2] <= 0.420789f) {
            if (feat_array[0] <= 0.148852f) {
                if (feat_array[0] <= 0.139391f) {
                    if (feat_array[0] <= 0.126558f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        if (feat_array[2] <= 0.309836f) {
                            arc_fault_votes += 1;
                        } else {
                            // arc_fault_votes += 0; (Normal Vote)
                        }
                    }
                } else {
                    if (feat_array[2] <= 0.341665f) {
                        arc_fault_votes += 1;
                    } else {
                        // arc_fault_votes += 0; (Normal Vote)
                    }
                }
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[1] <= 0.187505f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 224
    // ----------------------------------------
        if (feat_array[2] <= 0.426437f) {
            if (feat_array[0] <= 0.148852f) {
                if (feat_array[2] <= 0.201886f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[2] <= 0.206755f) {
                        if (feat_array[1] <= 0.131880f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[0] <= 0.141357f) {
                            if (feat_array[0] <= 0.133186f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                if (feat_array[2] <= 0.337771f) {
                                    arc_fault_votes += 1;
                                } else {
                                    // arc_fault_votes += 0; (Normal Vote)
                                }
                            }
                        } else {
                            if (feat_array[1] <= 0.154816f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        }
                    }
                }
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[0] <= 0.173131f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 225
    // ----------------------------------------
        if (feat_array[1] <= 0.167635f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 226
    // ----------------------------------------
        if (feat_array[2] <= 0.426437f) {
            if (feat_array[0] <= 0.144927f) {
                if (feat_array[2] <= 0.199782f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[0] <= 0.140840f) {
                        if (feat_array[0] <= 0.126041f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            if (feat_array[1] <= 0.152987f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        }
                    } else {
                        if (feat_array[0] <= 0.141566f) {
                            if (feat_array[1] <= 0.156167f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        } else {
                            if (feat_array[1] <= 0.157457f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        }
                    }
                }
            } else {
                if (feat_array[0] <= 0.148852f) {
                    if (feat_array[0] <= 0.145476f) {
                        if (feat_array[0] <= 0.145162f) {
                            arc_fault_votes += 1;
                        } else {
                            if (feat_array[2] <= 0.355340f) {
                                arc_fault_votes += 1;
                            } else {
                                // arc_fault_votes += 0; (Normal Vote)
                            }
                        }
                    } else {
                        if (feat_array[1] <= 0.153053f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            if (feat_array[2] <= 0.437828f) {
                if (feat_array[0] <= 0.175716f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 227
    // ----------------------------------------
        if (feat_array[2] <= 0.426691f) {
            if (feat_array[0] <= 0.148784f) {
                if (feat_array[1] <= 0.167332f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[2] <= 0.437448f) {
                if (feat_array[0] <= 0.176601f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 228
    // ----------------------------------------
        if (feat_array[2] <= 0.426437f) {
            if (feat_array[1] <= 0.168110f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[1] <= 0.187551f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 229
    // ----------------------------------------
        if (feat_array[0] <= 0.148852f) {
            if (feat_array[2] <= 0.199986f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                if (feat_array[2] <= 0.202154f) {
                    arc_fault_votes += 1;
                } else {
                    if (feat_array[0] <= 0.141057f) {
                        if (feat_array[2] <= 0.206348f) {
                            if (feat_array[0] <= 0.102354f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        } else {
                            if (feat_array[1] <= 0.177723f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        }
                    } else {
                        if (feat_array[2] <= 0.357025f) {
                            arc_fault_votes += 1;
                        } else {
                            // arc_fault_votes += 0; (Normal Vote)
                        }
                    }
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 230
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 231
    // ----------------------------------------
        if (feat_array[1] <= 0.168110f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 232
    // ----------------------------------------
        if (feat_array[1] <= 0.167586f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 233
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 234
    // ----------------------------------------
        if (feat_array[1] <= 0.167586f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 235
    // ----------------------------------------
        if (feat_array[2] <= 0.426706f) {
            if (feat_array[1] <= 0.167635f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[1] <= 0.187319f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 236
    // ----------------------------------------
        if (feat_array[1] <= 0.168110f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 237
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 238
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 239
    // ----------------------------------------
        if (feat_array[1] <= 0.166979f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 240
    // ----------------------------------------
        if (feat_array[2] <= 0.419314f) {
            if (feat_array[1] <= 0.167332f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[0] <= 0.173813f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 241
    // ----------------------------------------
        if (feat_array[2] <= 0.426437f) {
            if (feat_array[0] <= 0.148414f) {
                if (feat_array[0] <= 0.140842f) {
                    if (feat_array[0] <= 0.126041f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        if (feat_array[1] <= 0.152779f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                } else {
                    if (feat_array[2] <= 0.352016f) {
                        arc_fault_votes += 1;
                    } else {
                        // arc_fault_votes += 0; (Normal Vote)
                    }
                }
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[0] <= 0.173780f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 242
    // ----------------------------------------
        if (feat_array[0] <= 0.148414f) {
            if (feat_array[2] <= 0.199880f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                if (feat_array[0] <= 0.141357f) {
                    if (feat_array[0] <= 0.139428f) {
                        if (feat_array[2] <= 0.202248f) {
                            if (feat_array[2] <= 0.201886f) {
                                if (feat_array[2] <= 0.201133f) {
                                    arc_fault_votes += 1;
                                } else {
                                    // arc_fault_votes += 0; (Normal Vote)
                                }
                            } else {
                                arc_fault_votes += 1;
                            }
                        } else {
                            // arc_fault_votes += 0; (Normal Vote)
                        }
                    } else {
                        if (feat_array[1] <= 0.158657f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                } else {
                    if (feat_array[2] <= 0.355550f) {
                        arc_fault_votes += 1;
                    } else {
                        // arc_fault_votes += 0; (Normal Vote)
                    }
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 243
    // ----------------------------------------
        if (feat_array[0] <= 0.148852f) {
            if (feat_array[0] <= 0.141392f) {
                if (feat_array[1] <= 0.167381f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            } else {
                if (feat_array[1] <= 0.156401f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    arc_fault_votes += 1;
                }
            }
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 244
    // ----------------------------------------
        if (feat_array[2] <= 0.426403f) {
            if (feat_array[2] <= 0.266164f) {
                if (feat_array[2] <= 0.199676f) {
                    // arc_fault_votes += 0; (Normal Vote)
                } else {
                    if (feat_array[2] <= 0.206348f) {
                        if (feat_array[1] <= 0.130987f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[0] <= 0.123926f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                }
            } else {
                if (feat_array[2] <= 0.298570f) {
                    if (feat_array[2] <= 0.266772f) {
                        if (feat_array[1] <= 0.148129f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[2] <= 0.287576f) {
                            if (feat_array[2] <= 0.286610f) {
                                if (feat_array[1] <= 0.162652f) {
                                    // arc_fault_votes += 0; (Normal Vote)
                                } else {
                                    arc_fault_votes += 1;
                                }
                            } else {
                                if (feat_array[1] <= 0.153354f) {
                                    // arc_fault_votes += 0; (Normal Vote)
                                } else {
                                    arc_fault_votes += 1;
                                }
                            }
                        } else {
                            if (feat_array[2] <= 0.295359f) {
                                if (feat_array[2] <= 0.290442f) {
                                    if (feat_array[0] <= 0.126158f) {
                                        // arc_fault_votes += 0; (Normal Vote)
                                    } else {
                                        arc_fault_votes += 1;
                                    }
                                } else {
                                    if (feat_array[1] <= 0.171932f) {
                                        // arc_fault_votes += 0; (Normal Vote)
                                    } else {
                                        arc_fault_votes += 1;
                                    }
                                }
                            } else {
                                if (feat_array[0] <= 0.127451f) {
                                    // arc_fault_votes += 0; (Normal Vote)
                                } else {
                                    arc_fault_votes += 1;
                                }
                            }
                        }
                    }
                } else {
                    if (feat_array[2] <= 0.375342f) {
                        if (feat_array[2] <= 0.375204f) {
                            if (feat_array[1] <= 0.178624f) {
                                // arc_fault_votes += 0; (Normal Vote)
                            } else {
                                arc_fault_votes += 1;
                            }
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        if (feat_array[1] <= 0.185858f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    }
                }
            }
        } else {
            if (feat_array[0] <= 0.174247f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 245
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 246
    // ----------------------------------------
        if (feat_array[2] <= 0.420871f) {
            if (feat_array[1] <= 0.166733f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[0] <= 0.173813f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 247
    // ----------------------------------------
        if (feat_array[2] <= 0.426406f) {
            if (feat_array[0] <= 0.142682f) {
                if (feat_array[0] <= 0.141058f) {
                    if (feat_array[1] <= 0.167332f) {
                        // arc_fault_votes += 0; (Normal Vote)
                    } else {
                        arc_fault_votes += 1;
                    }
                } else {
                    if (feat_array[0] <= 0.141059f) {
                        arc_fault_votes += 1;
                    } else {
                        if (feat_array[2] <= 0.307522f) {
                            arc_fault_votes += 1;
                        } else {
                            // arc_fault_votes += 0; (Normal Vote)
                        }
                    }
                }
            } else {
                if (feat_array[2] <= 0.390739f) {
                    arc_fault_votes += 1;
                } else {
                    if (feat_array[2] <= 0.425299f) {
                        if (feat_array[1] <= 0.185985f) {
                            // arc_fault_votes += 0; (Normal Vote)
                        } else {
                            arc_fault_votes += 1;
                        }
                    } else {
                        // arc_fault_votes += 0; (Normal Vote)
                    }
                }
            }
        } else {
            if (feat_array[1] <= 0.191768f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 248
    // ----------------------------------------
        if (feat_array[1] <= 0.167381f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ----------------------------------------
    // TREE 249
    // ----------------------------------------
        if (feat_array[2] <= 0.426437f) {
            if (feat_array[1] <= 0.167332f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        } else {
            if (feat_array[1] <= 0.187551f) {
                // arc_fault_votes += 0; (Normal Vote)
            } else {
                arc_fault_votes += 1;
            }
        }

    // ----------------------------------------
    // TREE 250
    // ----------------------------------------
        if (feat_array[1] <= 0.168159f) {
            // arc_fault_votes += 0; (Normal Vote)
        } else {
            arc_fault_votes += 1;
        }

    // ============================================================================
    // ENSEMBLE VOTING LOGIC
    // ============================================================================
    if (arc_fault_votes > 125) {
        return 1; // Arc Fault Detected
    } else {
        return 0; // Normal Operation
    }
