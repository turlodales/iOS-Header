//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, PDSRequestInfo;

@interface PDSRequest : NSObject
{
    NSSet *_entries;
    PDSRequestInfo *_requestInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PDSRequestInfo *requestInfo; // @synthesize requestInfo=_requestInfo;
@property(readonly, nonatomic) NSSet *entries; // @synthesize entries=_entries;
- (id)description;
- (_Bool)isEqualToRequest:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithEntries:(id)arg1 requestInfo:(id)arg2;

@end

