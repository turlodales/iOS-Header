//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface PPNeuralNetwork : NSObject
{
    NSData *_data;
    const char *_dataBytes;
    unsigned long long _nlayers;
    const struct {
        unsigned int _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned int _field4;
        unsigned char _field5;
        unsigned char _field6;
        unsigned char _field7;
        unsigned char _field8;
    } *_layers;
}

- (void).cxx_destruct;
- (void)forInputs:(const float *)arg1 computeOutputLayer:(float *)arg2;
- (double)_predict:(float *)arg1 freeInputsAfterUse:(_Bool)arg2;
- (float *)_runOnInputs:(float *)arg1 freeInputsAfterUse:(_Bool)arg2;
- (double)predictWithFloats:(const float *)arg1;
- (double)predictWithDoubles:(const double *)arg1;
@property(readonly, nonatomic) unsigned long long outputSize;
@property(readonly, nonatomic) unsigned long long inputSize;
- (id)init;
- (id)initWithData:(id)arg1;

@end

