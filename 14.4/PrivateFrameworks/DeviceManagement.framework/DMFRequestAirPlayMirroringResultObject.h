//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskResultObject.h>

@interface DMFRequestAirPlayMirroringResultObject : CATTaskResultObject
{
    unsigned long long _status;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatus:(unsigned long long)arg1;

@end

