//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ECRawMessageHeader : NSObject
{
    NSString *_name;
    NSString *_transmittedName;
    NSString *_body;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, copy, nonatomic) NSString *transmittedName; // @synthesize transmittedName=_transmittedName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (id)initWithHeaderFieldName:(id)arg1 body:(id)arg2;

@end

