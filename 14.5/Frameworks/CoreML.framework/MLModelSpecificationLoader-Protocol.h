//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreML/NSObject-Protocol.h>

@class MLModelConfiguration;
@protocol MLModeling;

@protocol MLModelSpecificationLoader <NSObject>
+ (id <MLModeling>)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(MLModelConfiguration *)arg2 error:(id *)arg3;
@end

