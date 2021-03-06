//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ShareSheet/NSSecureCoding-Protocol.h>

@class NSString, UIImage;

@interface _UIActivityBundleImageConfiguration : NSObject <NSSecureCoding>
{
    UIImage *_fetchedImage;
    NSString *_imageName;
    NSString *_bundlePath;
    long long _activityCategory;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long activityCategory; // @synthesize activityCategory=_activityCategory;
@property(copy, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) UIImage *fetchedImage;
- (id)initWithImageName:(id)arg1 bundlePath:(id)arg2 activityCategory:(long long)arg3;

@end

