//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IconServices/ISIconResourceLocator.h>

#import <IconServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface ISIconTypeResourceLocator : ISIconResourceLocator <NSSecureCoding>
{
    NSString *_type;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSString *type; // @synthesize type=_type;
- (_Bool)allowLocalizedIcon;
- (id)preferedResourceName;
- (id)bundleIdentifier;
- (id)resourceDirectoryURL;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithType:(id)arg1;

@end

