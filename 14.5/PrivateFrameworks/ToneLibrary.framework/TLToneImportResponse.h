//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TLToneImportResponse : NSObject
{
    long long _statusCode;
    NSString *_toneIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *toneIdentifier; // @synthesize toneIdentifier=_toneIdentifier;
@property(readonly, nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
- (id)description;
- (id)initWithStatusCode:(long long)arg1 toneIdentifier:(id)arg2;

@end

