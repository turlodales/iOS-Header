//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface INFSentenceContext : NSObject
{
    NSNumber *_number;
    unsigned long long _gender;
}

+ (id)sentenceContext;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSNumber *number; // @synthesize number=_number;
- (id)combinedWithContext:(id)arg1;

@end

