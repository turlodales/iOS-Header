//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEFileHandle.h>

@class NSString;

@interface NEPolicySessionFileHandle : NEFileHandle
{
    NSString *_name;
}

- (void).cxx_destruct;
@property(readonly) NSString *name; // @synthesize name=_name;
- (unsigned long long)type;
- (id)description;
- (id)dictionary;
- (id)initFromDictionary:(id)arg1;
- (id)initWithPolicySession:(id)arg1 name:(id)arg2;
- (id)initWithPolicySession:(id)arg1;

@end

