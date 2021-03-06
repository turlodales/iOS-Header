//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface DAResolveRecipientsRequest : NSObject
{
    _Bool _retrieveCertificates;
    _Bool _retrieveAvailablilty;
    NSArray *_emailAddresses;
    NSDate *_startTime;
    NSDate *_endTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool retrieveAvailablilty; // @synthesize retrieveAvailablilty=_retrieveAvailablilty;
@property(nonatomic) _Bool retrieveCertificates; // @synthesize retrieveCertificates=_retrieveCertificates;
@property(retain, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithEmailAddresses:(id)arg1 retrieveCertificates:(_Bool)arg2 retrieveAvailability:(_Bool)arg3 withStartTime:(id)arg4 endTime:(id)arg5;
- (id)initWithEmailAddresses:(id)arg1;

@end

