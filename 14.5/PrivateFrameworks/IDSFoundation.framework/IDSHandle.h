//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSURI;

@interface IDSHandle : NSObject
{
    IDSURI *_URI;
    _Bool _isUserVisible;
    long long _validationStatus;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long validationStatus; // @synthesize validationStatus=_validationStatus;
@property(readonly, nonatomic) _Bool isUserVisible; // @synthesize isUserVisible=_isUserVisible;
@property(readonly, nonatomic) IDSURI *URI; // @synthesize URI=_URI;
- (unsigned long long)hash;
- (_Bool)isEqualToHandle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithURI:(id)arg1 isUserVisible:(_Bool)arg2 validationStatus:(long long)arg3;

@end

