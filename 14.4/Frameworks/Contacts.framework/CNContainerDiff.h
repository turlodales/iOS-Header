//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNContainerDiff : NSObject
{
    NSArray *_updates;
}

+ (id)diffContainer:(id)arg1 to:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *updates; // @synthesize updates=_updates;
- (id)description;
- (id)initWithUpdates:(id)arg1;

@end

