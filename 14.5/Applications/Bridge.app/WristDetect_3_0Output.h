//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLFeatureProvider-Protocol.h"

@class MLMultiArray, NSSet;

@interface WristDetect_3_0Output : NSObject <MLFeatureProvider>
{
    MLMultiArray *_final_result__0;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MLMultiArray *final_result__0; // @synthesize final_result__0=_final_result__0;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithFinal_result__0:(id)arg1;

@end

