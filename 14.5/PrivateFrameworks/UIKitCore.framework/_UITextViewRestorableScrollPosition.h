//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UITextViewRestorableScrollPosition : NSObject <NSCoding>
{
    struct _NSRange _range;
    double _offsetInLine;
}

+ (id)restorableScrollPositionWithDictionary:(id)arg1;
+ (id)restorableScrollPositionWithRange:(struct _NSRange)arg1;
+ (id)restorableScrollPositionForStateRestoration:(id)arg1;
+ (id)restorableScrollPositionForTextView:(id)arg1;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTextViewForStateRestoration:(id)arg1;
- (id)initWithTextView:(id)arg1;
- (double)offsetWithinLine;
- (struct _NSRange)range;
- (id)dictionaryRepresentation;

@end

