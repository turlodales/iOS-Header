//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MFPopupButtonItem : NSObject
{
    NSString *_title;
    long long _style;
}

+ (id)itemWithTitle:(id)arg1 style:(long long)arg2;
+ (id)itemWithTitle:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)copy;
- (_Bool)isEqual:(id)arg1;

@end

