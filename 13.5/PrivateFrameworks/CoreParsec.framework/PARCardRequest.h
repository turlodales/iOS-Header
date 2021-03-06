//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/PARRequest.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>

@class NSURL;

@interface PARCardRequest : PARRequest <NSSecureCoding>
{
    NSURL *_cardURL;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *cardURL; // @synthesize cardURL=_cardURL;
- (unsigned int)nwActivityLabel;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

