//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlaySupport/NSObject-Protocol.h>

@class CPTemplate, NAFuture;
@protocol CPTemplateDelegate;

@protocol CPSBaseTemplateViewController <NSObject>
@property(readonly, nonatomic) NAFuture *templateProviderFuture;
@property(retain, nonatomic) id <CPTemplateDelegate> templateDelegate;
@property(retain, nonatomic) CPTemplate *associatedTemplate;
@end

