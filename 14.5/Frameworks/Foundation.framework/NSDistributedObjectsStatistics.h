//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDictionary.h>

__attribute__((visibility("hidden")))
@interface NSDistributedObjectsStatistics : NSDictionary
{
    unsigned long long requestsReceived;
    unsigned long long repliesSent;
    unsigned long long requestsSent;
    unsigned long long repliesReceived;
}

- (id)objectForKey:(id)arg1;
- (void)addStatistics:(id)arg1;
- (id)keyEnumerator;
- (id)allKeys;
- (unsigned long long)count;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

