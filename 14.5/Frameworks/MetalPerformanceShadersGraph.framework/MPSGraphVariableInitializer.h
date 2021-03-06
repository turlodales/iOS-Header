//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MPSGraphVariableInitializer : NSObject
{
    double _constant;
    double _minimum;
    double _maximum;
    NSString *_file;
    unsigned int _initializerType;
}

+ (id)initializerWithFile:(id)arg1;
+ (id)initializerWithRandomUniformWithMinimum:(double)arg1 maximum:(double)arg2;
+ (id)initializerWithOnes;
+ (id)initializerWithZeros;
+ (id)initializerWithConstant:(double)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int initializerType; // @synthesize initializerType=_initializerType;
- (id)initializedDataWithNumberOfValues:(unsigned long long)arg1 dataType:(unsigned int)arg2;
- (id)init;

@end

