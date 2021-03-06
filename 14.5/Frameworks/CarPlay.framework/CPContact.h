//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlay/NSSecureCoding-Protocol.h>

@class CPContactEntity, NSArray, NSString, UIImage;

@interface CPContact : NSObject <NSSecureCoding>
{
    CPContactEntity *_contactEntity;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) CPContactEntity *contactEntity; // @synthesize contactEntity=_contactEntity;
@property(copy, nonatomic) NSString *informativeText; // @dynamic informativeText;
@property(copy, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(copy, nonatomic) NSArray *actions; // @dynamic actions;
@property(retain, nonatomic) UIImage *image; // @dynamic image;
@property(copy, nonatomic) NSString *name; // @dynamic name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 image:(id)arg2;

@end

