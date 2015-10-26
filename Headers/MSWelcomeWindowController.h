#import "NSWindowController.h"

#import "NSTextFieldDelegate.h"
#import "NSWindowDelegate.h"

@class NSButton, NSString, NSTextField, NSView;

@interface MSWelcomeWindowController : NSWindowController <NSWindowDelegate, NSTextFieldDelegate>
{
    NSButton *_confirmButton;
    NSButton *_closeButton;
    NSTextField *_emailField;
    NSView *_movieView;
    NSView *_normalView;
}

@property(retain, nonatomic) NSView *normalView; // @synthesize normalView=_normalView;
@property(retain, nonatomic) NSView *movieView; // @synthesize movieView=_movieView;
@property(retain, nonatomic) NSTextField *emailField; // @synthesize emailField=_emailField;
@property(retain, nonatomic) NSButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) NSButton *confirmButton; // @synthesize confirmButton=_confirmButton;
- (void).cxx_destruct;
- (void)windowWillClose:(id)arg1;
- (void)openTemplateNamed:(id)arg1;
- (void)openWebDesignTemplate:(id)arg1;
- (void)openIOSIconTemplate:(id)arg1;
- (void)openIOSDesignTemplate:(id)arg1;
- (void)subscribeToNewsletter:(id)arg1;
- (void)likeUsOnFacebook:(id)arg1;
- (void)followUsOnTwitter:(id)arg1;
- (void)contactSupport:(id)arg1;
- (void)readManual:(id)arg1;
- (void)openIntroDocument:(id)arg1;
- (void)playMovie:(id)arg1;
- (void)showWhatsNew:(id)arg1;
- (BOOL)signUpFieldsContainsValidEmail;
- (void)controlTextDidChange:(id)arg1;
- (void)confirm:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

