//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PDIterate : NSObject
{
    int mType;
    _Bool mIsBackwards;
    _Bool mIsPercentage;
    double mValue;
}

- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)setValue:(double)arg1;
- (double)value;
- (void)setIsValuePercentage:(_Bool)arg1;
- (_Bool)isValuePercentage;
- (void)setIsBackwards:(_Bool)arg1;
- (_Bool)isBackwards;
- (void)setType:(int)arg1;
- (int)type;

@end

