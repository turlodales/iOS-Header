//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SSADEventReporter : NSObject
{
}

+ (void)reportBadDirectivesForModelType:(unsigned long long)arg1;
+ (void)reportModelDeletionForType:(unsigned long long)arg1;
+ (void)reportBadL3Models;
+ (void)reportBadL2Models;
+ (void)reportModelLoadingError;
+ (void)reportModelUnpackageEventWithType:(unsigned long long)arg1;
+ (void)reportKey:(id)arg1;

@end

