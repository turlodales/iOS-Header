//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNUICoreWhitelistedContactsControllerOptions : NSObject
{
    _Bool _shouldPrepopulateEmptyWhitelist;
    _Bool _shouldRequireConfirmationOfChanges;
}

+ (id)iosOptions;
+ (id)macOptionsLocal;
+ (id)macOptions;
@property(readonly, nonatomic) _Bool shouldRequireConfirmationOfChanges; // @synthesize shouldRequireConfirmationOfChanges=_shouldRequireConfirmationOfChanges;
@property(readonly, nonatomic) _Bool shouldPrepopulateEmptyWhitelist; // @synthesize shouldPrepopulateEmptyWhitelist=_shouldPrepopulateEmptyWhitelist;
- (id)initWithShouldPrepopulateEmptyWhitelist:(_Bool)arg1 shouldRequireConfirmationOfChanges:(_Bool)arg2;
- (id)init;

@end

