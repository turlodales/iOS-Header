//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface STMSizeCacheEvent : NSObject
{
    unsigned int _flags;
    NSString *_path;
    unsigned long long _evtID;
}

+ (id)eventWithPath:(id)arg1 flags:(unsigned int)arg2 event:(unsigned long long)arg3;
- (void).cxx_destruct;
@property unsigned int flags; // @synthesize flags=_flags;
@property unsigned long long evtID; // @synthesize evtID=_evtID;
@property(retain) NSString *path; // @synthesize path=_path;

@end

