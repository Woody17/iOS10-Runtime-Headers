/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface MSBalloonTemplateLayout : MSMessageTemplateLayout <MSBalloonLayout>

@property (nonatomic, copy) NSString *caption;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *secondarySubcaption;
@property (nonatomic, copy) NSString *subcaption;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *tertiarySubcaption;
@property (nonatomic, copy) NSString *trailingCaption;
@property (nonatomic, copy) NSString *trailingSubcaption;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)secondarySubcaption;
- (void)setSecondarySubcaption:(id)arg1;
- (void)setTertiarySubcaption:(id)arg1;
- (id)tertiarySubcaption;

@end
